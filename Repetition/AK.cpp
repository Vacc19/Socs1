#include <stdio.h>
int main(){
	int tc, arr[1001];
	scanf("%d",&tc);
	
	for(int i=0;i<tc;i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i=1;i<=tc;i++){

		if(arr[i]<=arr[i-1]){
			printf("%d", arr[i-1]);
					if(i != tc){
			printf(" ");
		}

		}		
	}
	printf("\n");

		return 0;
}

