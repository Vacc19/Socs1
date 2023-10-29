#include<stdio.h>
int main(){
	int x,y;
	scanf("%d %d", &x, &y);
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			printf("#");
		}
		printf("\n");
	}
		printf("\n");
		for(int i=1;i<=x;i++){
			if(i%y==0){
				for(int j=0;j<x;j++){
					printf("#");
				}
			}
			if(i%y!=0){
				for(int j=0;j<x;j++){
					printf(".");
				}
			}
		printf("\n");
	}
	printf("\n");
		for(int i=0;i<x;i++){
			for(int j=1;j<=x;j++){
				if(j%y==0){
					printf("#");
				}
				else {
				printf(".");
				}
			}
		printf("\n");
	}
	
	
	
	return 0;
}
