#include <stdio.h>
int main(){
	long long int a,count = 0;
	scanf("%lld", &a);
	a = a + 1;
	count = a * ( a + 1 ) /2;
	printf("%lld\n", count);
		return 0;
}

