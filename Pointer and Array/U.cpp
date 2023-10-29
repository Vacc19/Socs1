#include<stdio.h>
int main(){
	int tc;
	scanf("%d", &tc);
	for(int i=1; i<=tc; i++){
		int n,A[101];
		int x,y;
		scanf("%d", &n);
		for(int j=0;j<n;j++){
			scanf("%d", &A[j]);
		}
		scanf("%d %d", &x, &y);
		if(A[x-1]>A[y-1]){
			printf("Case #%d : Bibi\n", i);
		}
		else if(A[x-1]<A[y-1]){
			printf("Case #%d : Lili\n", i);
		}
		else if(A[x-1]==A[y-1]){
			printf("Case #%d : Draw\n", i);
		}
			
		
	}
	return 0;
}
