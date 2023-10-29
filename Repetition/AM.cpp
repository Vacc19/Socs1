#include <stdio.h>
int main(){

	int tc, x;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		scanf("%d", &x);
		printf("Case #%d:\n", i);
		for(int j=1; j<=x; j++){
			printf("%d ", j);
			if((j%3==0 || j%5==0 )&& j%15!=0){
				printf("Jojo\n");
			}
			else{
				printf("Lili\n");
			}
			
		}
	}
 
 
 
 return 0;
 
}
