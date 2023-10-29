#include <stdio.h>
int main(){
	long long int N, P, arr[100001], result=0;
	scanf("%lld %lld", &N, &P);
	for(int i=0; i<N;i++){
		scanf("%lld", &arr[i]);
		if(arr[i]<P){
			result = result + 1;
		}
		
		
		
	}
	printf("%lld\n", result);
	
	return 0;
}
