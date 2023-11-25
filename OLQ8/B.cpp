#include <stdio.h>
int main(){
	int tc;
	long long int arr[101][101], arr2[101];
	int size;
	
	scanf("%d", &tc);
	for(int i=1; i<=tc; i++){
		
		scanf("%d", &size);
	
			for(int k=0;k<size;k++){
				arr2[k] = 0;
			}

		for(int j=0;j<size;j++){
			for(int k=0;k<size;k++){
				scanf("%lld", &arr[j][k]);
				arr2[k]+=arr[j][k];
			}
		}
	
		printf("Case #%d:", i);
		for(int k=0;k<size;k++){
				printf(" %lld", arr2[k]);
			}
		printf("\n");
		
	} 
	
	
	
	
	return 0;
}
