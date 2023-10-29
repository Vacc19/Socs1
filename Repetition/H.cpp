#include <stdio.h>
int main(){
	int sq;
	scanf("%d", &sq);
	for(int i=0; i<sq ;i++){
		for(int j=0;j<sq;j++){
			printf("*");
		}
		printf("\n");
	}
	
	
	return 0;
}
