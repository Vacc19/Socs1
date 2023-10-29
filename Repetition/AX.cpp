#include <stdio.h>
int main(){
	long long int tc, count=0, arr[10001];
	
	scanf("%lld", &tc);
	
	for(int i=0; i<tc; i++){
		
		scanf("%lld", &arr[i]);
				if(arr[i]>0){
			count = count + arr[i];

		}
	}
	
	printf("%lld\n", count);
	return 0;
}
