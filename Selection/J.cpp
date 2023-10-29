#include <stdio.h>
int main(){
int A,B,C;

scanf("%d %d %d", &A, &B, &C);
if((A+B)%C == 0 && A<=B && (A+B-C)>0){
	printf("%d\n", B-C);
}
else printf("-1\n");


	return 0;
}
