#include <stdio.h>
int main(){
	int tc, full, empty, a, b, total;
	scanf("%d", &tc);
	for(int i =1; i<=tc; i++){
		full = 0;
		empty = 0;
		total = 0;
		scanf("%d %d", &a, &b);
		full = a;
		while(full!=0){
			total +=  full;
			empty += full;
			full = empty / b;
			empty = empty % b;
			
		}
		
		printf("Case #%d: %d\n", i, total);
	}
	
	
	
	
	
	return 0;
}
