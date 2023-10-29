#include <stdio.h>
int main(){
	int tc, num, pc;
	int ODD,EVEN; 
	scanf("%d", &tc);
	for(int i=0; i<tc; i++){
		ODD = 0;
		EVEN = 0;
	
		scanf("%d", &num);
		for(int j=0; j<num;j++){
			scanf("%d", &pc);
			if(pc%2==1){
				ODD++;
			}
			if(pc%2==0){
				EVEN++;
			}
			
		}
		printf("Odd group : %d integer(s).\n", ODD);
		printf("Even group : %d integer(s).\n\n", EVEN);
	}
	return 0;
}
