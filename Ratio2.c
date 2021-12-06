#include <stdio.h>
#include <conio.h>

main(){
	float a,b,ratio;

	do{
		printf("\nEnter two numbers: ");
		scanf("%f %f", &a, &b);

		if(b == 0.0)
			printf("The ratio is undefined\n"
		else{
			ratio = a/b;
			printf("The ratio is %f \n",ratio);
		}
		printf("Press ´q´ to quit, any other key to continue");
	}while(getch() != ´q´);
}
