#include <ctype.h>

Do_mainMenu(short *done){
	
	char cmd;
	
	*done = 0;
	
	do{
		cmd = toupper(getch());
		switch(cmd){
				case 'F': do_file_menu(done); break;
				case 'R': run_program(); break;
				case 'C': do_compile(); break;
				case 'M': do_make(); break;
				case 'P': do_project_menu(); break;
				case 'O': do_option_menu(); break;
				case 'E': do_error_menu(); break;
				default : handle_others(cmd,done);
		}while(!*done);
	}
	
}