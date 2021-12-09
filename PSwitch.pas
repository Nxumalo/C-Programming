case Ch of 
	'C' : DoCompile;
	'R' : begin
		if not Compiled
		then DoCompile
		RunProgram;
	end;
	'S' : SaveFile;
	'E' : EditFile;
	'Q' : begin
		if not Saved
		then SaveFile
	end;
 end;
 
 case Today of 
	Mon..Fri : Writeln('go work!');
	Sat,Sun	 : begin
	  if Today = Sat then begin
		Write('clean the ');
		Write('yard and ')
		end;
		
	  Writeln('relax!')
	  end
	end;
	 