#include<stdio.h>

int Fibo(int a){

	if(a == 0){
      return 0;
   } else if(a%2==1){
   		return 1;
   } else {
      return (Fibo(a-1) + Fibo(a-2));
   }
}
int main(){
	int n, temp;

	

		scanf("%d", &n);
	
		printf("%d\n", Fibo(n));
		

	
	
	return 0;
}
