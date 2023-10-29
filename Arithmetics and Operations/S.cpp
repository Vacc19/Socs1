#include <stdio.h>
int main(){
	double X,Y,Z,A;

	scanf("%lf %lf %lf", &X, &Y, &Z);
	
	A =  Y*Z + 3*X*Y;
	
	printf("%.3lf\n", A);

return 0;
}

