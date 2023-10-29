#include <stdio.h>
int main(){
	double X,Y,Z,A;
	
	scanf("%lf %lf %lf",&X,&Y,&Z);
	A =  0.2*X + 0.3*Y + Z*0.5;
	printf("%.2lf\n", A);
	
	
	
	return 0;
}
