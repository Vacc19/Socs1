#include <stdio.h>
int main(){
	int tc, games, L, B;
	char con;
	scanf("%d", &tc);
	for(int i=0; i<tc;i++){
		L=0;
		B=0;
		scanf("%d", &games);
		for(int j=0;j<=games;j++){
		
			scanf("%c", &con);
				if(con == 76){
					L = L+1;
				}
				else if(con == 66){
					B = B+1;
				}
		
		} 

		
		if(B==L){
			printf("None\n");
		}
		else if(L>B){
			printf("Lili\n");
		}
		else if(L<B){
			printf("Bibi\n");
		}
		
	}
	
	
	return 0;
}
