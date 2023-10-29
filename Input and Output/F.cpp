#include <stdio.h>
int main(){
	char N[100];
	int M;
	scanf("%[^\n]", &N);
	scanf("%d", &M);
	
	if(M<=100){
		printf("%s\n", N);
		printf("%d\n", M);
}
	return 0;
}
