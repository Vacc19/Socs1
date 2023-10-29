#include <stdio.h>
int main(){
int T, K, N;

scanf("%d", &T);
for(int i = 1; i<=T; i++){
	
	
	scanf("%d %d", &K, &N);
	
	
	if(K > N){
	
	printf("Case #%d: Go-Jo\n", i);}
	else if( N > K){
		printf("Case #%d: Bi-Pay\n", i);
	}
	
}
	
	

	



	return 0;
}
