#include <stdio.h>
int main(){
	int tc;
	int arr[51][51];
	
	int n, m, q;
	int temp;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int lights[51]={0};
		scanf("%d %d %d", &n, &m, &q);
		for(int j=0;j<n;j++){
			for(int k=0;k<m;k++){
				scanf("%d", &arr[j][k]);
			}
			getchar();
		}
		for(int j = 0; j<q ; j++ ){
			scanf("%d", &temp);
			temp-=1;
			for(int k =0; k<m; k++){
				lights[k]+=arr[temp][k];
				if(lights[k]>1){
					lights[k]=0;
				}
			}
		}
		printf("Case #%d:\n", i);
		for(int j=0;j<m;j++){
			if(lights[j]==1){
				printf("YES\n");
			} else{
				printf("NO\n");
			}
		}
		
		
		
	}
	return 0;
}



