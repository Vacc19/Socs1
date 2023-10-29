#include<stdio.h>
int main(){
	int tc;
	long int n;
	long long int arr[100001], max1, max2;
	long int pos1, pos2;
	scanf("%d", &tc); getchar();
	for(int i=1;i<=tc;i++){
		pos1 =0;
		pos2 = 0;
		max1= 0;
		max2=0;
		
		scanf("%ld", &n);
		for(int j=0;j<n;j++){
			scanf("%lld", &arr[j]); 
		}
	
		for(int j=0;j<n;j++){
			if(arr[j]>=arr[pos1]){
				max1 = arr[j];
				pos1= j;
			}
		}
		for(int j=0;j<n;j++){
			
			if(arr[j]>=0 && j!=pos1){
				max2 = arr[j];
				pos2= j;
				break;
			}
		}
		for(int j=0;j<n;j++){
			
			if(arr[j]>=arr[pos2] && j!=pos1){
				max2 = arr[j];
				pos2= j;
			}
		}
		printf("Case #%d: %lld\n", i, max1+max2);

	}
	
	
	
	
	
	return 0;
}
