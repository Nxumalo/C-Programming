#include <stdio.h>

main(){
	char *msg;
	int up,down;

	msg = " Hello, World ";
	for(up 1 , down = 9; up <= 10; up++, down--)
		printf("#%s: %2d down, %2d to go\n", msg, up, down);

}
