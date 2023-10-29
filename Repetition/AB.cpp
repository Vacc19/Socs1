#include <stdio.h>
int main(){
	int tc, num, a,b,c,d, count;
	scanf("%d", &tc);
	for(int i = 1; i<=tc;i++){
		scanf("%d %d %d %d %d", &num, &a, &b , &c, &d);
		count = 0;
			for(int j = num; j>0; j--){
				if(j%a==0){
					count++;
				}
				else if(j%b==0){
					count++;
				}
				else if(j%c==0){
				count++;
				}
				else if(j%d==0){
					count++;
				}
				else{
					continue;
				}
			}
				
				printf("Case #%d: %d\n", i, count);
				
			
		
		
		
	}
	
	
	
	
	
	
	
	
	return 0;
}
