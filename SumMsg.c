#include <stdio.h>

main(){

	int sum;
	char *msg;

	sum = 5+3;
	msg = "Hello, there\n";
	printf(" sum = %d &sum = %p \n",sum,&sum);
	printf("*msg = %c msg %p \n", *msg,msg);

}
