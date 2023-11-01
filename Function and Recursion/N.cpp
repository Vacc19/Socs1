#include<stdio.h>
int flag;
char pos1[3],pos2[3];
void F(char board[][10], int x, int y, int depth, char type){
	if(board[x][y] == type) return;
	else if(board[x][y] != '\0'){
		flag = 1;
		return;
	}
	board[x][y] = type;
	if (depth == 0) return;
	
	if (x + 1 < 9 && y + 2 < 9) F(board, x + 1, y + 2, depth - 1, type);
	if (x + 2 < 9 && y + 1 < 9) F(board, x + 2, y + 1, depth - 1, type);
	if (x + 2 < 9 && y - 1 > 0) F(board, x + 2, y - 1, depth - 1, type);
	if (x + 1 < 9 && y - 2 > 0) F(board, x + 1, y - 2, depth - 1, type);
	if (x - 1 > 0 && y + 2 < 9) F(board, x - 1, y + 2, depth - 1, type);
	if (x - 2 > 0 && y + 1 < 9) F(board, x - 2, y + 1, depth - 1, type);
	if (x - 2 > 0 && y - 1 > 0) F(board, x - 2, y - 1, depth - 1, type);
	if (x - 1 > 0 && y - 2 > 0) F(board, x - 1, y - 2, depth - 1, type);
	
}
int main(){
	int tc;
	scanf("%d",  &tc); getchar();
	for(int t = 1 ; t <= tc; t++){
		int d;
		flag = 0;
		scanf("%d", &d); getchar();
		scanf("%s %s", pos1, pos2);
		char board[10][10]={'\0'};
		F(board, pos1[0]-'A'+1, pos1[1]-'1'+ 1, d, 'W');
		F(board, pos2[0]-'A'+1, pos2[1]-'1'+ 1, d, 'B');
		printf("Case #%d: ", t);
		if(flag==1){
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}
