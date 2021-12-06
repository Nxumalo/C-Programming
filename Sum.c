#include <stdio.h>

main(){

	int a,b,sum;
	char *format;

	format = "a =%d b=%d sum = %d \n";
	a = b = 5;

	sum = a   + b;	printf(format,a,b,sum);
	sum = a++ + b;	printf(format,a,b,sum);
	sum = ++a + b;	printf(format,a,b,sum);
	sum = --a + b;	printf(format,a,b,sum);
	sum = a-- + b;	printf(format,a,b,sum);
	sum = a   + b;	printf(format,a,b,sum);

}
