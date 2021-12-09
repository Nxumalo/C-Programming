main(){
	
	char *name;
	char msg[10];
	
	name = (char *) malloc(10);
	printf("What is your name? ");
	scanf("%s",name);
	
	msg = "Hello, ";
	strcpy(msg,"Hello, ");
	printf("%s%s", msg,name);
	
}