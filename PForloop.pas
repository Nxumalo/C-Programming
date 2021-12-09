for I := 1 to 10 do begin
	Write('I = ',I:2);
	Write(' I*I = ',(I*I):4);
	Writeln(' I**3 = ',(I*I*I):6)
end;

I := 17; K := I;
while(I > -450) do begin

	K := K + I;
	Writeln('K = ',K,' I = ',I);
	I := I - 15
end;

X := D/2.0;
while(Abs(X*X-D) > 0.01 do
		X := (X + D/X) /2.0;