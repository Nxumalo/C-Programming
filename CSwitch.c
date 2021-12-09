switch(ch){
	case 'C' : DoCompile(); break;
	case 'R' :
		if (!compiled)
			DoCompile();
		RunProgram();
		break;
	case 'R' : SaveFile(); break;
	case 'E' : EditFile(); break;
	case 'Q' : 
		if(!saved)
			SaveFile();
		break;
}

switch(today){
	
	case Mon  :
	case Tue  :
	case Wed  : 
	case Thur :
	case Fri  : puts("go work!");
		break;
	case Sat  : printf("%s","clean the yard and ");
	case Sun  : puts("relax!");
	
}