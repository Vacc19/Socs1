#include <stdio.h>
int main(){
	long long int arr1[10001], arr2[10001];
	int tc;
	int N;
	int count;
	scanf("%d", &tc);
	for(int i=1; i<=tc; i++){
		count = 0;
		scanf("%d", &N);
		for(int j=0; j<N; j++){
			scanf("%lld", &arr1[j]);
		} 
		for(int j=0; j<N; j++){
			scanf("%lld", &arr2[j]);
		}

		for(int j=0; j<N; j++){
			if(arr1[j]<arr2[j]){
				count++;
			}
		}
		printf("Case #%d: %d\n",i, count);
		
		
	}
	return 0;
}
