#include <stdio.h>
int main(){
	int tc, q, count=0;
	char arr1[101], arr2[101];
	
	scanf("%d", &tc);
	for(int i=0; i<tc; i++){
	scanf("%d", &q); getchar();
	scanf("%[^\n]s", &arr1); getchar();
	scanf("%[^\n]s", &arr2);
		
		for(int y = 0; y<q; y++){
			if(arr1[y]==arr2[y]){
				count++;
			}
		}
		printf("Case #%d: %d\n", i+1, count*100/q);
		count = 0;
		}
		
		
		
		
	
	
	return 0;
}
