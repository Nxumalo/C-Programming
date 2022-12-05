Toif B = 0
	then Writeln('P is undefined')
else begin
	P := A div B;
	Writeln('P = ',P)
end;

P := A*B;
if P <> 0
	then P := P + B
	else P := A*B
