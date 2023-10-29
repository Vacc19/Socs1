#include <stdio.h>
int main(){
	double N1,N2,N3,N4;
	double M1,M2,M3,M4;
	scanf("%lf %lf", &N1,&M1);
	scanf("%lf %lf", &N2,&M2);
	scanf("%lf %lf", &N3,&M3);
	scanf("%lf %lf", &N4,&M4);

	printf("$%.2lf\n", M1/((100-N1)/100));
	printf("$%.2lf\n", M2/((100-N2)/100)); 
	printf("$%.2lf\n", M3/((100-N3)/100));
	printf("$%.2lf\n", M4/((100-N4)/100)); 
return 0;
}

