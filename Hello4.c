#include <stdio.h>

main(){
	char *msg
	int indx;

	msg = "Hello, world";
	for(indx = 1; indx <= 10; indx++)
		printf("time #%2d: %s\n",indx,msg);


}
