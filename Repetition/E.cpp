#include<stdio.h>
int main(){
	int tc, x,y;
	scanf("%d", &tc);
	for(int i=1;i<=tc;i++){
		scanf("%d %d", &x, &y);
		printf("%d\n", (x>>y) & 1);
		
	}
	
	
	return 0;
}
