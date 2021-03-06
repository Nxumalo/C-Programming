#include <stdio.h>
#include <conio.h>

/* Functions declarations */

void get_parms(float *p1, float *p2);
float get_ratio(float dividend, float divisor);
void put_ratio(float ratio);

const float INFINITY = 3.4E+38;

/* Main function: starting point for program */

main(){

	float a,b,ratio;

	do{
		get_parms(&a,&b);		/* Get Parameters */
		ratio = get_ratio(a,b);		/* Calculate ratio */
		put_ratio(ratio);		/* Print answer out */
		printf("Press q to quit, any other key to continue ");
	}while(getch() != 'q');
}	/* End of main */

/* Functions definition */

void get_parms(float *p1, float *p2){

	printf("\nEnter two numbers: ");
	scanf("%f %f",p1,p2);

}

float get_ratio(float dividend, float divisor){
	
	if(divisor == 0.0)
		return (INFINITY);
	else
		return (dividend / divisor);
}

void put_ratio(float ratio){

	if(ratio == INFINITY)
		printf("The ratio is undefined\n");
	else
		printf("The ratio is %f\n", ratio);
}
