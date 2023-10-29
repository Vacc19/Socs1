#include <stdio.h>
int main(){
	int tc;
	int n;
	long long int arr[1001];
	scanf("%d", &tc);
	for(int i=1;i<=tc;i++){
		scanf("%d", &n);
		for(int j=0;j<n;j++){
			scanf("%lld", &arr[j]);
		}
		printf("Case #%d:", i);
		for(int j=n-1;j>=0;j--){
			printf(" %lld", arr[j]);
		}
		printf("\n");
	}
	return 0;
}
