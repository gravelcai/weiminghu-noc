module fifo#(
    parameter   DEPTH   =   16  ,
    parameter   WIDTH   =   64  
)(
    //上游
    input                   clk     ,
    input                   rst     ,
    input   [WIDTH-1:0]     fifo_in ,
    input                   valid_in,
    output                  ready_out,
    input   [10:0]          wid     ,//wid会对fifo进行标记
    input                   flush   ,//当tracker里面aw的length和收到w的数量对等的时候，进行flush操作，
    output                  flush_done,
    output  [10:0]          tag     ,//就是该fifo存的wid
    input                   stall   ,
    //下游
    input                   ready_in,
    output                  valid_out,
    output  [WIDTH-1:0]     fifo_out
);
    localparam  LOG2_DEPTH = $clog2(DEPTH)  ;

    wire		full	;
	reg [10:0]	tag_q	;
	reg			flushing;	
	wire		empty	;
	wire		pop		;
	reg			valid_q	;
	wire		active	;


assign	ready_out	=	(!full)	&	(!flushing)	;	//FIFO is locked when flushing
assign	valid_out	=	pop	;	
assign	pop			=	ready_in	&	flushing	&	(!empty)	&	(!stall);
assign	flush_done	=	flushing	&	empty	;
assign	tag			=	tag_q	;
assign	active		=	ready_in	&	valid_q	;

always@(posedge clk)
begin
	if(rst)
		valid_q		<=	1'b0	;
	else if(pop)
		valid_q		<=	1'b1	;
	else
		valid_q		<=	1'b0	;
end

always@(posedge clk)
begin
	if(rst)
		tag_q[10:0]	<=	11'b0	;
	else if(valid_in)
		tag_q[10:0]	<=	wid[10:0]	;
	else
		tag_q[10:0]	<=	tag_q[10:0]	;
end

always@(posedge clk)
begin
	if(rst)
		flushing	<=	1'b0	;
	else if(flush)
		flushing	<=	1'b1	;
	else if(flush_done)
		flushing	<=	1'b0	;
	else
		flushing	<=	flushing;
end

sync_fifo #(
  .DEPTH(DEPTH),
  .WIDTH(WIDTH)
)
u_sync_fifo
(
  .clk(clk),
  .rst_n(!rst),
  .push(valid_in),
  .data_in(fifo_in),
  .pop(pop),
  .data_out(fifo_out),
  .empty(empty),
  .full(full),
  .flush(0)
);

endmodule