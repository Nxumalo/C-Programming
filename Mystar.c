#include <alloc.h>

main(){
	
	star *mystar;
	
	mystar = (star *) malloc(sizeof(star));
	strcpy(mystar -> name,"Fraser Nxumalo");
	
	mystar -> class = 'K';
	mystar -> subclass = 2;
	mystar -> dec1 = 3.5167;
	mystar -> RA = -9.633;
	mystar -> dist = 0.303;
	
	/* Rest of function main() */
	
}