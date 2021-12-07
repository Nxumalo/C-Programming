int lmin(int list[], int size){
	
	int i, minindx, min;
	minindx = 0;
	min = list[minindx];
	
	for(i = 1; i<size; i++)
		if(list[i] < min){
			min = list[i];
			minindx = i;
		}
		return (minindx);
}
