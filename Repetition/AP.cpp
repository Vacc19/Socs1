#include <stdio.h>
int main(){
	int tc, K, E, AA;
	char arr[101];
	int arr2[101];
	
	
	
	scanf("%d", &tc);
	for(int i=1; i<=tc; i++){
		scanf("%d %d", &K, &E); getchar();
	
		for(int j=0; j<K; j++){
			scanf("%c", &arr[j]);
			
			arr2[j] = arr[j];
			
			arr2[j] += E%26;
			
			if(arr2[j] > 'z'){
				arr2[j] -= 26;
			}
		
		}
			printf("Case #%d: ", i);
		for(int j=0; j<K; j++){
			printf("%c", arr2[j]);
		}
		
		printf("\n");
		
		
	}
	
	return 0;
}
