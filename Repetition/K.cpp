#include <stdio.h>
int main(){

int tc, tr, space, in;
scanf("%d", &tc);
	for(int i=0; i<tc;i++){
	
		scanf("%d", &tr);
		space = tr;
		in = 0;
		printf("Case #%d:\n", i+1);
		for(int x=0; x<tr; x++){
		
		for(int j =space; j>1 ;j--){
			printf(" ");
		}
		if(tr%2==0){
		
		for(int y=0; y<=in;y++){
			if(y%2==0){
				printf("#");
			}
			if(y%2==1){
				printf("*");
			}
		}
		}
		if(tr%2==1){
		
		for(int y=0; y<=in;y++){
			if(y%2==0){
				printf("*");
			}
			if(y%2==1){
				printf("#");
			}
		}
		}
		
		
		
		in = in + 1;
		printf("\n");
		space = space - 1;
		}
	
	
}




	return 0;
}
