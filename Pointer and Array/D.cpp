#include<stdio.h>
int main(){
	int x, y;
	int map[101][101];
	scanf("%d %d", &x, &y);
	for(int i = 0; i<x;i++){
		for(int j = 0; j<y;j++){
			scanf("%d", &map[i][j]);
		}	
	}
	int n, x2, y2, enter;
	scanf("%d", &n);
	
	for(int i = 0; i<n ; i++){
		scanf("%d %d %d", &x2, &y2, &enter);
		map[x2-1][y2-1]=enter;
	}
	
	
	for(int i = 0; i<x;i++){
		printf("%d", map[i][0]);
		for(int j = 1; j<y;j++){
			printf(" %d", map[i][j]);
		}	
		printf("\n");
	}
	
	
	
	return 0;
}
