#include <ctype.h>

do_main_menu(short *done){
	
	char cmd;
	
	*done = 0;
	
	do{
		cmd = toupper(getch());
		else if(cmd == 'R') run_program();
		else if(cmd == 'C') do_compile();
		else if(cmd == 'M') do_make();
		else if(cmd == 'P') do_project_menu();
		else if(cmd == 'O') do_option_menu();
		else if(cmd == 'E') do_error_menu();
		else handle_others(cmd, done);	
	}while(!*done);
	
}