#include <stdio.h>
int main(){
	char X, Y, Z;

	
	
	scanf("%c %c %c", &X, &Y, &Z);
	
	
	if(X>Y && X>Z){
		if(Y>Z){
			printf("3 2 1\n");		
			}
		else 
			printf("2 3 1\n");
		}
	else if(Y>Z && Y>X){
		if(Z>X){
			printf("1 3 2\n");		
			}
		else 
			printf("3 1 2\n");
		}	
	else if(Z>Y && Z>X){
		if(Y>X){
			printf("1 2 3\n");		
			}
		else 
			printf("2 1 3\n");
		}
	

	

	
	

	



	return 0;
}
