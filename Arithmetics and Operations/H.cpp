#include <stdio.h>
int main(){
	double a1,b1,c1,d1;
	double a2,b2,c2,d2;
	double a3,b3,c3,d3;
	double e1,e2,e3;
	
	scanf("%lf %lf %lf %lf", &a1, &b1, &c1, &d1);
	scanf("%lf %lf %lf %lf", &a2, &b2, &c2, &d2);
	scanf("%lf %lf %lf %lf", &a3, &b3, &c3, &d3);
	
	e1 = 2*a1+((b1/2)*4) +((c1/3)*6) + ((d1/4)*4);
	e2 = 2*a2+((b2/2)*4) +((c2/3)*6) + ((d2/4)*4);
	e3 = 2*a3+((b3/2)*4) +((c3/3)*6) + ((d3/4)*4);
	
 	printf("%.2lf\n", e1);
 	printf("%.2lf\n", e2);
 	printf("%.2lf\n", e3);
return 0;
}

