#include <stdio.h>
int main(){
	long long int A;
	long long int j;
	int i;

	scanf("%lld", &A);
	j=1;
	while(i<A){
		i++;
		j = j*2;	
	}
	printf("%lld\n", j-1);
return 0;
}

