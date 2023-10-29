#include <stdio.h>
int main(){
	int tc, a, b, arr[101], print;
	scanf("%d", &tc);
	for(int i=1; i<=tc; i++){
	print = 0;
		scanf("%d %d %d", &a, &b, &arr[0] );
		for(int j=1;j<=a;j++){
			scanf("%d", &arr[j]);
		}
		for(int j=0; j<=a;j++){
			if(arr[j]>print && arr[j]<=b){
				print = arr[j];
			}
		}
		printf("Case #%d: %d\n", i, print);
	}
	
}
