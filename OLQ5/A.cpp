#include <stdio.h>
int main(){
	int tc, num;
	long int price[100001], menu;
	long int result;
	
	scanf("%d", &tc);
	
	for(int i=1; i<=tc; i++){
		result = 0;
		scanf("%d %ld", &num, &menu);
		
		for(int j=0; j<num;j++){
			scanf("%ld", &price[j]);
			result = result + price[j];
		}
		
		if(result<=menu){
			printf("Case #%d: No worries\n", i);
		} 
		else{
				printf("Case #%d: Wash dishes\n", i);
		}
		
	}
	
		return 0;
}
