#include <stdio.h>
int main(){
	int H, W, tc;
	scanf("%d", &tc);
	for(int i=1; i<=tc;i++){
		scanf("%d %d",&H, &W);
		printf("Case #%d:\n",  i);
	for(int j=0; j<W;j++){
		printf("#");
	}
	printf("\n");
	
	if(H>2){
		for(int x=0;x<H-2;x++){
			printf("#");
			for(int y=0;y<W-2;y++){
				printf(" ");
			}
			printf("#\n");
			
		}
		
		
		
		
		
		
	}
	
	
	
	
	
	
	if(H>1){
	
	for(int j=0; j<W;j++){
		printf("#");
	}
	printf("\n");
	}
		
		
	}
	return 0;
}
