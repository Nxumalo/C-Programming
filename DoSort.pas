program DoSort;
const 
	LMax = 100;
type
	Item = integer;
	List = array[1..LMax] of Item;
var
	myList  : List;
	Count,I : integer;
	Ch		: char;

procedure SortList(var L : List; C : integer);
var
	Top,Min,K : integer;
	
procedure SwapItem(var I,J : Item);
var 
	Temp : Item;
begin

	Temp = I; I := J; J := Temp
	
end; { of proc SwapItem }

begin { Main body of SortList }
		
	for Top := 1 to C - 1 do begin
		Min := Top;
		for K := Top + 1 to C do  
			if L[K] < L[Min]
				then Min := K;
		SwapItem(L[Top],L[Min])
	end;
end; { of proc SortList }

procedure DumpList(L : List);

var 
	I : integer;
begin

	for I := 1 to C do 
		Writeln('L[',I:3,'] = ',L[I]:4)
end;	{ End of proc DumpList }		
	