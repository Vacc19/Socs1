#include <stdio.h>
//int Fibo(int num){
//	if(num==1){
//		return 0;
//	}
//	if(num==2){
//		return 1;
//	}
//	
//	return Fibo(num-1) + Fibo(num-2);
//}
int main(){
	long long int arr[90];
	arr[0]=0;
	arr[1]=1;
	int tc;
	int a;
	scanf("%d", &tc);
	for(int i= 1; i<=tc ; i++){
		scanf("%d", &a);
		for(int j=1; j<a; j++){
		arr[j+1]=arr[j];
		arr[j+1]+=arr[j-1];
		
	}
		printf("Case #%d: %lld\n", i, arr[a-1]);
	}
	
	
	return 0;
}
