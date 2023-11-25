#include <stdio.h>
int main(){
	int tc;
	scanf("%d", &tc);
	for(int t=1; t<=tc; t++){
		int arr[10001]={1};
		int N, M;
		int count=0;
		scanf("%d %d", &N, &M);
		for(int i=0;i<M;i++){
			int temp;
			scanf("%d", &temp);
			for(int j =1; j<= N; j++){
				if(j%temp==0) arr[j]++;
			}
		}
		printf("Case #%d:", t);
		for(int i = 1; i<=N; i++){
			if(arr[i]%2==1)	count++;
			else printf(" %d", i);
		}
		if(count==N) printf(" No room left!");
		printf("\n");	
	}
	return 0;
}
