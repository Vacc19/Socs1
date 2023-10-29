#include <stdio.h>
int main(){
	int C;

	scanf("%d",&C);
for (int i = 0; i < C; i++) {
	double X,Y,Z,A,B;
	scanf("%lf", &X);

	Y = X*4/5;
	Z = X*9/5+32;

	A = X+273;
	printf("%.2lf ", Y);
	printf("%.2lf ", Z);
	printf("%.2lf\n", A);

	
}


return 0;
}

