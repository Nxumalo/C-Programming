main(){
	
	int i,j;
	int *a,*b,temp;
	
	i = 420;
	j = 69;
	
	printf("before: i = %4d j = %4d\n",i,j);
	a = &i;
	b = &j;
	temp = *a; *a = *b; *b = temp;
	printf("after: i = %4d j = %4d\n",i,j);
	
} 
