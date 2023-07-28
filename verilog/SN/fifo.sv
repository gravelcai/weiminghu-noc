module fifo #(
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
    //下游
    input                   ready_in,
    output                  valid_out,
    output  [WIDTH-1:0]     fifo_out
);
    localparam  LOG2_DEPTH = $clog2(DEPTH)  ;

    wire

synchronous_fifo u_sync_fifo # (
    .DWIDTH(WIDTH), 
    .AWIDTH(LOG2_DEPTH), 
    .DEPTH(DEPTH)
    )(
    .clk(clk),
    .reset(rst),
    .push(),
    .in(fifo_in),
    .pop(),
    .out(fifo_out),
    .empty(),
    .almostempty(),
    .full(),
    .almostfull(),
    .num(fifo_cnt)
);



endmodule