#include<stdio.h>
int Ack(int m, int n){
	if(m==0){
		return n+1;
	}
	else if(m>0 && n==0){
		return Ack(m-1, 1);
	}
	else if(m>0 && n>0){
	return Ack(m-1,Ack(m,n-1));		
	} 
}	
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("result: %d\n", Ack(a,b));	
	return 0;
}
