#include <stdio.h>
int main(){
	int copy, num;
	scanf("%d %d", &copy, &num); 
	for(int i=0;i<copy;i++){
		for(int k =1; k <= num ;k++){
		
		for(int j=num; j>k; j--){
			printf(" ");
		}
		for(int j=1; j<=k; j++){
			printf("*");
		}
	
		printf("\n");
		}
	}
	

	return 0;
}
