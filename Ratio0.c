#include <stdio.h>

main(){

	float a,b,ratio;

	printf("Enter two numbers: ");
	scanf("%f %f",&a,&b);

	if(b == 0.0)
		printf(" The ratio is undefined \n");

	else{
		ratio = a / b;
		printf(" The ratio is %f \n", ratio);
	}

}
