#include<stdio.h>
int main(){
	int n, count=0;
	long long int arr[5001];
	int flag;
	scanf("%d", &n);
	
	for(int i=0; i<n;i++){
		scanf("%lld", &arr[i]);
	}
	for(int i=0;i<n;i++){
		flag = 1;
		for(int j=0;j<i;j++){
			
			if(arr[j]==arr[i]){
				flag = 0;
				break;
			}
			
		}
		if(flag==1){
			count++;
		}
	}
	printf("%d\n", count);
	
	
	return 0;
}
