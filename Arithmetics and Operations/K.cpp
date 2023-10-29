#include <stdio.h>
int main()
{
	double X,Y,Z;
	scanf("%lf %lf", &X, &Y);
	
	Z = (1+Y/100)*(1+Y/100)*(1+Y/100)*X;
	
	printf("%.2lf\n", Z);
	
return 0;
}

