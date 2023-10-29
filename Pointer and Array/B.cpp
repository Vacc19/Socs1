#include <stdio.h>
int main(){
	int arr1[101], arr2[101];
	int tc;
	int N;
	scanf("%d", &tc);
	for(int i=1; i<=tc; i++){
		scanf("%d", &N);
		for(int j=0; j<N; j++){
			scanf("%d", &arr1[j]);
		} 
		for(int j=0; j<N; j++){
			scanf("%d", &arr2[j]);
		}
		printf("Case #%d:", i);
		for(int j=0; j<N; j++){
			printf(" %d", arr1[j]-arr2[j]);
		}
		printf("\n");
		
		
	}
	return 0;
}
