#include<stdio.h>
int count=0;
int Fibo(int a){
	count++;
	if(a == 0){
      return 0;
   } else if(a == 1) {
      return 1;
   } else {
      return (Fibo(a-1) + Fibo(a-2));
   }
}
int main(){
	int tc, n, temp;
	scanf("%d", &tc);
	for(int t= 1; t<=tc;t++){
		count = 0;
		scanf("%d", &n);
		temp = Fibo(n);
		printf("Case #%d: %d\n", t, count);
		
	}
	
	
	return 0;
}
