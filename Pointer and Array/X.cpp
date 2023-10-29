#include<stdio.h>
	long int arr[501][501];
	int n,m;
int findmax(int a){
	int max=0;
	for(int x = 0; x<m ; x++){
		if(max<arr[a][x]){
			max=arr[a][x];
		}
	}
	
	return max;
}


int main(){
	int tc;
	scanf("%d", &tc); getchar();
	for(int i=1; i<=tc;i++){
		long int sum=0;
		scanf("%d %d", &n,&m);
		getchar();
		for(int j=0; j<n;j++){
			for(int k=0; k<m;k++){
				scanf("%d", &arr[j][k]);
			}
			getchar();
		}
		
		for(int j=0;j<n;j++){
			sum+= findmax(j);
			
		}
		printf("Case #%d: %ld\n", i, sum);
	}
	return 0;
}

