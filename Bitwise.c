#include <stdio.h>

main(){

	int a,b,c;
	char *format1, *format2;

	format1 = " %04 %s %04X = %04X\n";
	format2 = " %c%04 = %04X\n";

	a = 0x0FF0;	b = 0xFF00;
	c = a << 4; 	printf(format1,a,"<<",4,c);
	c = a >> 4; 	printf(format1,a,"<<",4,c);
	c = a & b;	printf(format1,a," & ",b,c);
	c = a | b;	printf(format1,a," | ",b,c);
	c = a ^ b;	printf(format1,a," ^ ",b,c);
	c = ~a;		printf(format2,´~´,a,c);
	c = -a;		printf(format2,´-´,a,c);

}
