#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int tc = 1 ; tc<=t ; tc++){
		int weight, num;
		int count = 0 ;
		scanf("%d %d", &num , &weight);
		for(int i = 0 ; i < num ; i++){
			int temp;
			scanf("%d", &temp);
			if(temp >= weight) count++;
		}
		printf("Case #%d: %d\n", tc , count);
		
	}
	
	
	
	return 0;
}
