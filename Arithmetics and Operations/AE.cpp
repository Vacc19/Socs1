#include <stdio.h>
int main(){
	long long int X;
	long long int i=2;
	long long int Z = 0;
	
	scanf("%lld",&X);
	while(i<=X)
	{
		i-=1;
		Z = 50*i + Z;
		i+=2;
		
	}
	Z = Z + 100*X;
	
	printf("%lld\n", Z);
	
	
	return 0;
}
