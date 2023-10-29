#include <stdio.h>
int main(){
	double tc, R, H, V;
	scanf("%lf", &tc);
	for(int i=1;i<=tc;i++){
		V=0;
		scanf("%lf %lf", &R, &H);
		V = (3.14*2*R*H) + (2 * 3.14 * R * R);
		printf("Case #%d: %.2lf\n", i, V);
		
		
	}
	return 0;
}

