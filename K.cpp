#include <stdio.h>
int main(){
	char N[255];
	char A[255];
	int U;
	
	scanf("%[^\n]", &N);
	scanf("%s %d", &A, &U);
	printf("Name: %s\n", N);
	printf("NIS: %s\n", A);
	printf("Age: %d\n", U);
return 0;
}
