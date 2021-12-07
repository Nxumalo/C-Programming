#include <alloc.h>

main(){
	
	#define NUMINTS 3
	int *list,i;
	
	list = (int *) calloc(NUMINTS,sizeof(int));
	*list = 420;
	*(list+1) = 69;
	*(list+2) = 1654;
	
	printf("liost of addresses: ");
	for(i = 0; i<NUMINTS; i++)
		printf("%4p ",(list+i));
	
	printf("\nlist of values :");
	for(i = 0; i<NUMINTS; i++)
		printf("%4d ",*(list+i));
	
	printf("\n");
	
}