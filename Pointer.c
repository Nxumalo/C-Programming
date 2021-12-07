main(){
	int ivar,*iptr;
	
	iptr = &ivar;
	ivar = 421;
	printf("location of ivar: %p\n",&ivar);
	printf("contents of ivar: %d\n",ivar);
	printf("contents of iptr: %p\n",iptr);
	printf("value pointed to: %d\n",*iptr);
}