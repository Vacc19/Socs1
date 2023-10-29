#include <stdio.h>
int main(){
	long long int tc, tc2, result;
	scanf("%lld", &tc);
	long long int arr[101];
	result = 0;
	for(int i=0; i<tc ;i++){
		scanf("%lld", &tc2);
		
		for(int j=0;j<tc2;j++){
			scanf("%lld", &arr[j]);
			result = result + arr[j];
		}
		printf("Case #%lld: %lld\n", i+1, result);
		result = 0;
	}

	return 0;
}
