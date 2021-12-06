#include <stdio.h>

main(){

	int len;

	len = 0;
	puts("Type in a sentence, then press <Enter>");

	while(getchar() != ´\n´)
		len++;
	printf("\nYour sentence was %d characters long\n",len);

}
