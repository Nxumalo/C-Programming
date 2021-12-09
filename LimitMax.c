#define LIMIT 100
#define MAX 10

main(){
	
	int i,j,k,score;
	int score[LIMIT][MAX];
	
	for(i = 0; i < LIMIT; i++){
		
		j = 0;
		while( j < MAX-1){
			printf("please enter score #%d: ", j);
			scanf("%d",&score);	
			if(score < 0)
				break;
			scores[i][++j] = score;
		}
		scores[i][0] = j;
	}
	
}