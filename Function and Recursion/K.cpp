#include<stdio.h>

int Fibo(int a, int b, int c){

	if(a == 0){
      return b;
   } else if(a == 1) {
      return c;
   } else {
      return (Fibo(a-1, b, c) + Fibo(a-2,b,c));
   }
}
int main(){
	int term, n1, n2;

		scanf("%d %d", &n1, &n2);
		scanf("%d", &term);
		
		printf("%d\n", Fibo(term,n1,n2));

	return 0;
}
