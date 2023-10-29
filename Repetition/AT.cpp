#include <stdio.h>
int main(){
	int tc, num, s;
	scanf("%d", &tc);
	for(int i = 0; i<tc; i++){
		scanf("%d", &num);
		for(int j = 0; j <num; j++){
			for(int x = j+1; x<num; x++){
				printf(" ");
			}
			s = j*2+1;
			for(int x = 0; x<s; x++){
				printf("*");
			}
			printf("\n");
			
		}
	}
}
