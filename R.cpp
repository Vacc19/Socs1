#include <stdio.h>
int main(){
	char N[255], M[255];	
	char P;
	int A;
	
	scanf("%[^\n]\n", &N);
	scanf("%[^\n]\n", &M);
	scanf("%c %d", &P, &A);
	
	printf("Id    : %s\n", N);
	printf("Name  : %s\n", M);
	printf("Class : %c\n", P);
	printf("Num   : %d\n", A);
	
	
	
	return 0;
}
