#include<stdio.h>
int main(){
	
	int tc, n;
	int arr1[51][51]={0},arr2[51][51]={0},arr3[51][51]={0};
	scanf("%d", &tc);
	for(int t = 1; t<=tc;t++){
		scanf("%d", &n);
		int arr12[51][51]={0},arr4[51][51]={0};
		for(int i =0; i<n;i++){
			for(int j=0; j<n; j++){
				scanf("%d", &arr1[i][j]);
			}
		}
		
		for(int i =0; i<n;i++){
			for(int j=0; j<n; j++){
				scanf("%d", &arr2[i][j]);
			}
		}
		
		for(int i =0; i<n;i++){
			for(int j=0; j<n; j++){
				scanf("%d", &arr3[i][j]);
			}
		}
		for(int i =0; i<n;i++){
			for(int j=0; j<n; j++){
				for(int k=0; k<n;k++){
					arr12[i][j]+=arr1[i][k]*arr2[k][j];
				}
			}
		}
		for(int i =0; i<n;i++){
			for(int j=0; j<n; j++){
				for(int k=0; k<n;k++){
					arr4[i][j]+=arr12[i][k]*arr3[k][j];
				}
			}
		}
		printf("Case #%d:\n", t);
		for(int i =0; i<n;i++){
			for(int j=0; j<n; j++){
				if(j<n-1){
				
				printf("%d ", arr4[i][j]);}
				else{
					printf("%d", arr4[i][j]);
				}
			}
			printf("\n");
		}
		
		
		
		
		
		
		
	}
	
	return 0;
}
