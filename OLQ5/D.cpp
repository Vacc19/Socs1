#include<stdio.h>
int main(){
	int tc, x,y, n;
	scanf("%d", &tc);
	for(int i=1;i<=tc;i++){
		y=0;
		x=0;
		scanf("%d", &n);
		printf("Case #%d: ", i);
		for(x=1; n/x>0;x*=2){
			y++;
		}
		x/=2;
		for(int j = 1; j<=y; j++){
			printf("%d", (n&x)/x);
			x/=2;
		}
			printf("\n");
	
	}
	return 0;
}
