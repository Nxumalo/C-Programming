void setrand(int matrix[][CSIZE], int rsize){
	
	int i,j;
for(i = 0; i rsize; i++){
	for(j = 0; j <CSIZE; j++)
		matrix[i][j] = rand();
	}
}
