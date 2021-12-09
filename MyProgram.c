int i,j,k;

int max(int a, int b){
	
	if(a > b)
		return (a);
	else
		return (b);
	
}
/* End of Max() */

void swap(int *a, int *b)
{
	int temp;
	temp = *a; *a = *b; *b = temp;
}
/* End of Swap () */

main(){
	
	i = 10; j = 15;
	k = max(i,j);
	swap(&i, &k);
	printf("i = %2d j = %2d", i,j);
	printf(" k =  %2d\n",k);
	
}
/* End of Main */