#include <stdio.h>
int main(){
	int D;

	scanf("%d",&D);
for (int i = 0; i < D; i++) {
	double A, B, C;
	scanf("%lf %lf",&A, &B);
	C= B*A/100;
	printf("%.2lf\n", C);
;

	
}

return 0;
}

