main(){
	#define VSIZE 22
	int i, vector[VSIZE];
	
	for(i = 0; i <VSIZE; i++){
		vector[i] = rand();
		printf("vector[%2d] = %6d\n",i,vector[i]);
	}
	
	i = lmin(vector,VSIZE);
	printf("minimum: vector[%2d] = %6d\n",i,vector[i]);
}
