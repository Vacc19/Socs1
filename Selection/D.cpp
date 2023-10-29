#include <stdio.h>
int main(){
int T, K, N;

scanf("%d", &T);
for(int i = 1; i<=T; i++){
	
	
	scanf("%d %d", &K, &N);
	
	
	if((N*K) %2 == 0 ){
	
	printf("Case #%d: Party time!\n", i);}
	else	printf("Case #%d: Need more frogs\n", i);
	
}
	
	

	



	return 0;
}
