#include <stdio.h>

main(){

	char first[30], middle[30], last[30];

	printf("What is your name: ");
	scanf("%s %s %s",first,middle,last);
	printf("Hello,Dr. %s, or should I say %s?\n",last,first);

}
