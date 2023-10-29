#include <stdio.h>
int main(){
	long long int X,Y,A,B,C;
	long long int X2,Y2,A2,B2,C2;
	long long int X3,Y3,A3,B3,C3;
	scanf("(%lld+%lld)x(%lld-%lld)\n", &X, &Y, &A, &B);
	scanf("(%lld+%lld)x(%lld-%lld)\n", &X2, &Y2, &A2, &B2);	
	scanf("(%lld+%lld)x(%lld-%lld)", &X3, &Y3, &A3, &B3);
	
	C = ((X+Y)*(A-B));
	C2 = ((X2+Y2)*(A2-B2));
	C3 = ((X3+Y3)*(A3-B3));
	
	printf("%lld %lld %lld\n", C, C2, C3);
return 0;
}

