#include <stdio.h>
int main(){
	int tc,candy,money, price[10001], pos;
	scanf("%d",&tc);
	for(int i = 1; i <= tc; i++){
		pos = 0;
		scanf("%d %d", &candy, &money); getchar();
		for(int j = 0; j<candy; j++){
			scanf("%d", &price[j]);
		}
		for(int j = 1; j<candy; j++){
			if(price[j]<price[pos]){
				pos = j;
			}
		}
		
		printf("Case #%d: %d\n", i, money/price[pos]);
		
		
		
	}
	return 0;
}
