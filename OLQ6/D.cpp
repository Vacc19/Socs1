#include<stdio.h>
int main(){
	long long int tc, d, b, x, y, z;
	scanf("%lld", &tc);
	for(int i = 1; i<=tc; i++){
		y=0;
		scanf("%lld", &d);
		for(x = 1; d/x>0; x*=2){
			y++;
		}

		x/=2;
		
		printf("Case #%lld: ", i);
		for(int j = 0; j<y; j++){
			printf("%lld", (d & x) / x);
			x/=2;
		}
		printf("\n");
	}

	return 0;
}
