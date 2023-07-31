module rr_arbiter#(
    parameter   DATA_WIDTH  	=   4,
	parameter	LOG2_DATA_WIDTH	=	2
)(
    input   [DATA_WIDTH-1:0]        data_in     ,
    output  [DATA_WIDTH-1:0]        entry_dec   ,
    output  [LOG2_DATA_WIDTH-1:0]   entry_enc   ,
    output                          entry_found
);

reg	[LOG2_DATA_WIDTH-1:0]	entry_enc_q	;

assign  entry_dec[DATA_WIDTH-1:0]   =   data_in[DATA_WIDTH-1:0] & (~(data_in[DATA_WIDTH-1:0] - 1));
assign  entry_found                 =   | entry_dec[DATA_WIDTH-1:0] ;
assign	entry_enc[LOG2_DATA_WIDTH-1:0] =	entry_enc_q[LOG2_DATA_WIDTH-1:0];

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
