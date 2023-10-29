	#include<stdio.h>
	int main(){
		int in;
		int index[101] ={0};
		int n;
		int a;
		int count=0;
		scanf("%d", &n);
		for(int i = 0; i<n*n; i++){
			scanf("%d", &a);
			index[a]++;
		}
		for(int i = 1; i<=n;i++){
			if(index[i]<n){
				count++;
			}
		}
		printf("%d\n", count);
		return 0;
	}	
