#include <stdio.h>
int main(){
	int tc, arr[1001];
	long int result = 0;
	
 	scanf("%d", &tc); getchar();
 	
 	for(int i=0; i<tc; i++){
 		scanf("%d", &arr[i]);
 		result = arr[i] + result;
	 }
	 printf("%d\n", result);
	 
	



}
