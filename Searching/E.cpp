#include<stdio.h>
void bubbleSort(int arr[], int n){
	for(int i = 0 ; i<n-1 ; i++){
		for(int j = i+1 ; j<n ; j++ ){
			if(arr[i]>arr[j]){
			int temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int main(){
	int t;
	scanf("%d", &t);
	for(int tc = 1 ; tc<=t; tc++){
		int mmr[1001];	
		int n;
		int search;
		scanf("%d", &n);
		for(int i = 0 ; i < n ; i++) scanf("%d", &mmr[i]);
		bubbleSort(mmr,n);
		scanf("%d", &search);
		int flag = 0;
		int ans;
		for(int i = 0; i < n; i++ ){
			if(mmr[i]==search){
				if(i==n-1){
					ans = mmr[i-1];
				}
				if(i!=n-1){
					ans = mmr[i+1];
				}
				flag = 1;
				
				break;
			}
		}
		if(flag==1){
			if(search < ans)printf("CASE #%d: %d %d\n", tc, search, ans);
			if(search > ans)printf("CASE #%d: %d %d\n", tc, ans, search);
		} else{
			printf("CASE #%d: -1 -1\n", tc);	
		}	
	}
	return 0;
}
