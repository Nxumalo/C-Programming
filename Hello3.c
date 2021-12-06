#include <stdio>

main(){

	char *msg;
	int  indx;

	msg = "Hello, world";
	indx = 1;
	while(indx <= 10){
		printf("time #%2d: %s\n",indx,msg);
		indx++;
		
	}

}
