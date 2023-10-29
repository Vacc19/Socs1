#include <stdio.h>
int main(){
	int items;
	long int prices[101];
	int tc, a, b;
	scanf("%d", &items);
	for(int i=0; i<items; i++){
			scanf("%d", &prices[i]);
		} 
	scanf("%d",&tc);
	for(int i=1; i<=tc; i++){
			scanf("%d %d", &a, &b);
			prices[a-1] = b;
			printf("Case #%d:", i );
			for(int j=0; j<items; j++){
			printf(" %d", prices[j]);
		} 
		printf("\n");
		} 

	return 0;
}
