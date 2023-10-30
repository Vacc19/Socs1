#include<stdio.h>

int F(int a, int c){
	int b;

	if(a%2==0){
		b= a/2;
	} else if(a%2==1){
		b = a*3+1;
	}
	if(a==c){
		return 1;
	}
	if(a==1){
		return 0;
	}
	return F(b,c);
}
int main(){
	int tc;
	int n1, n2;
	scanf("%d", &tc);
	for(int t=1;t<=tc;t++){
	
		scanf("%d %d", &n1, &n2);
		
		printf("Case #%d: ", t);
		if(F(n1,n2)==0){
			printf("NO\n");
		} else{
			printf("YES\n");
		}
		
	}
	
	return 0;
}
