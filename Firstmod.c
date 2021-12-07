/* 	FIRST MODULE 		*/

int a = 1;
main(){
	int b = 2;
	myfunc();
	printf("%d",i);

}

/*	MODULE 2 		*/

static int e = 3;
static void localfunc(void){
	
	int d = 4;
	printf("End of the road\n");

}
void myfunc(void){
	
	int c = 5;
	localfunc();

}
