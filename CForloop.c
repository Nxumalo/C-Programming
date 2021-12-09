for( i = 1; i <= 10; i++){
	printf("i = %2d ",i);
	printf("i*i = %4d ", i*i);
	printf("i**3 = %6d\n", i*i*i);
}

for(i = 17, k = i; i > -450; i -=15){
	
	k += i,
	printf("k = %d i = %d\n",k,i);
	
}

for(x = d/2; fabs(x*x-d) > 0.01;
	x = (x+d/x) / 2)
	; /* Empty statement */