#include <stdio.h>
int main(){
	int tc, n,arr[1001],count,pos;
	scanf("%d", &tc);
	for(int i=1; i<=tc;i++){
		count = 0;
		pos = 0;
		
		scanf("%d", &n);
		for(int j=0; j<n; j++){
			scanf("%d", &arr[j]);
			
		if(arr[j]>arr[pos]){
			pos = j;
		}
		
		}
		for(int j = 0; j<n; j++){
			if(arr[pos]==arr[j]){
				count++;
			}
			
		}
		printf("Case #%d: %d\n", i, count);
	}
	return 0;
}
