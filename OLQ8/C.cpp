#include <stdio.h>
int main(){
	int X, Y, Z;

	int arr[100][100]={0};
	scanf("%d %d %d", &X, &Y, &Z);
	for(int i = 0; i<Z ; i++ ){
		int A,B,C;
		scanf("%d %d %d", &A, &B, &C);
		arr[A][B] = C;	
	}
	
	for(int x=0; x<X; x++){
		for(int y=0; y<Y; y++){
		if(y==Y-1){
		printf("%d\n", arr[x][y]);		
		} 
		else {
		printf("%d ", arr[x][y]);}
		}
	}
	return 0;
}
