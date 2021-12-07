main(){

	#define NUMINTS 3
	int list[NUMINTS],i;
	
	list[0] = 420;
	list[1] = 69;
	list[2] = 10001
	printf("list of addresses: ");
	for(i = 0; i < NUMINTS; i++)
		printf("%4p ", &list[i]);
	printf("\nlist of values : ");
	for(i = 0; i < NUMINTS; i++)
		printf("%4d ", list[i]);
	printf("\n");
	
	
}