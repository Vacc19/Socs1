#include <stdio.h>
int main(){
	int tc, A, B;
	scanf("%d", &tc);
	for(int i=1;i<=tc;i++){
		B = 97;
		scanf("%d", &A);
		printf("Case #%d: ", i);
		for(int j=0; j<A;j++){
			printf("%c", B);
			B++;
		}
		printf("\n");
	}
}
