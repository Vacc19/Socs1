#include <stdio.h>
int n;
int arr[101];
void F(int index,int sum){
	if(index>n) return;
	sum+=arr[index-1];
	if(index*2>n) printf("%d\n", sum);
	else{
	
	F(index*2, sum);
	F(index*2+1,sum);
}
}
int main(){
	int tc;
	scanf("%d", &tc);
	for(int t = 1 ; t<=tc ; t++){
		scanf("%d", &n);
		for(int i = 0 ; i<n ; i++) scanf("%d", &arr[i] );
		printf("Case #%d:\n", t);
		F(1,0);
		
	}
	
	return 0;
}

