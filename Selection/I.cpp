#include <stdio.h>
int main(){
int T, K, N, M;

scanf("%d", &T);
for(int i = 1; i<=T; i++){
	scanf("%d %d %d", &K, &N, &M);
	
	if(K*N/100 > M){
	
	printf("Case #%d: %d\n", i, M);}
	else
	printf("Case #%d: %d\n", i, K*N/100);
}
	
	

	



	return 0;
}
