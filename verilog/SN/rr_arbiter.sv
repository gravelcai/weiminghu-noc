module rr_arbiter#(
    parameter   DATA_WIDTH  	=   4,
	parameter	LOG2_DATA_WIDTH	=	2
)(
    input   [DATA_WIDTH-1:0]        data_in     ,
    output  [DATA_WIDTH-1:0]        entry_dec   ,
	output	[DATA_WIDTH-1:0]		nxt_entry_dec,
    output  [LOG2_DATA_WIDTH-1:0]   entry_enc   ,
    output                          entry_found	,
	output							nxt_entry_disable
);

reg	[LOG2_DATA_WIDTH-1:0]	entry_enc_q	;
reg	[DATA_WIDTH-1:0]		invert_data	;
wire[DATA_WIDTH-1:0]		invert_again;

genvar macro;
generate 
for(macro=0;macro<DATA_WIDTH;macro=macro+1)
	begin
	always@*
		begin
			invert_data[macro]	=	data_in[DATA_WIDTH-macro-1]	;
		end
	end
endgenerate

generate 
for(macro=0;macro<DATA_WIDTH;macro=macro+1)
	begin
	assign		nxt_entry_dec[macro]	=	invert_again[DATA_WIDTH-macro-1]	;
	end
endgenerate

assign  entry_dec[DATA_WIDTH-1:0]   =   data_in[DATA_WIDTH-1:0] & (~(data_in[DATA_WIDTH-1:0] - 1));
assign  invert_again[DATA_WIDTH-1:0]   =   invert_data[DATA_WIDTH-1:0] & (~(invert_data[DATA_WIDTH-1:0] - 1));
assign  entry_found                 =   | entry_dec[DATA_WIDTH-1:0] ;
assign	entry_enc[LOG2_DATA_WIDTH-1:0] =	entry_enc_q[LOG2_DATA_WIDTH-1:0];
assign	nxt_entry_disable			=	(entry_dec == nxt_entry_dec)	;

integer	i;

always@*
begin
    entry_enc_q[LOG2_DATA_WIDTH-1:0]  =   {LOG2_DATA_WIDTH{1'b0}};
    for(i=0;i<DATA_WIDTH;i=i+1)
    begin
        if(entry_dec[i])    
            entry_enc_q[LOG2_DATA_WIDTH-1:0]  =   entry_enc_q[LOG2_DATA_WIDTH-1:0]  |   i[LOG2_DATA_WIDTH-1:0]  ;
    end
end

endmodule