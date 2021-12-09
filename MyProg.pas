program MyProg;
var 
	I,J,K : integer;
	
function Max(A,B : integer) : integer;
begin
	if A > B
		then Max := A
		
		else Max := B
end.
{ End of Function Max }

procedure Swap(var A,B : integer);

var 
	Temp : integer;
begin
	
	Temp := A; A:= B; B := Temp
	
End;

{ End of procedure Swap }

begin { main body of MyProg }

	I := 10; J :=15;
	K := Max(I,J);
	Swap(I,K);
	Write('I = ' I:2,' J =',J:2);
	Writeln(' K = ', K:2)
end.		