#include <alloc.h>

main(){
	
	int *iptr;
	
	iptr = (int *) malloc(size(int));
	*iptr = 421;
	printf("contents of iptr: %p\n", iptr);
	printf("value pointed to: %d\n", *iptr);
}