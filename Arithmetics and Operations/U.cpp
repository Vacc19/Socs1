#include <stdio.h>
int main(){
	int C;

	scanf("%d",&C);
for (int i = 0; i < C; i++) {
	double X,Y,Z;
	scanf("%lf %lf", &X, &Y);

	Z = X*Y/360 ;
	printf("%.2lf\n", Z);
}


return 0;
}

