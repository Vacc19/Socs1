#include <stdio.h>
int main()
{
	int C;
	scanf("%d",&C);
	
for (int i = 0; i < C; i++)
{
	double X,Y,Z,A;	
	scanf("%lf %lf %lf %lf", &X, &Y, &Z, &A);
	
	double B = X*2+ Y*2 + Z*4/3 + A/2;
	
	printf("%.2lf\n", B);
}

return 0;
}

