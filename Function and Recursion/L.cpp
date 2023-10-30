#include<stdio.h>

int Fibo(int a, int b, int c){

	if(a == 0){
      return b;
   } else if(a == 1) {
      return c;
   } else {
      return (Fibo(a-1,b,c) - Fibo(a-2, b, c));
   }
}
int main(){
	int tc;
		scanf("%d", &tc);
	for(int t= 1; t<=tc;t++){
		int term, n1, n2;
	
		scanf("%d %d %d", &term, &n1, &n2);
		
		printf("Case #%d: %d\n", t, Fibo(term, n1, n2));
		}
	return 0;
}
