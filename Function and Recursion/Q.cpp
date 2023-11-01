#include <stdio.h>
int target_x, target_y;
int arr[7] = {0};

int F(int x, int y, int n) {
    if (n > 6) {
        return 0;
    }
    if (x >= 1 && y >= 1 && x <= 8 && y <= 8) {
        if (x == target_x && y == target_y) {
            arr[n] = n;
            return n;
        }
        return F(x + 2, y + 1, n + 1) + F(x + 2, y - 1, n + 1) +
               F(x - 2, y + 1, n + 1) + F(x - 2, y - 1, n + 1) +
               F(x + 1, y + 2, n + 1) + F(x + 1, y - 2, n + 1) +
               F(x - 1, y + 2, n + 1) + F(x - 1, y - 2, n + 1);
    } else {
        return 0;
    }
}
int main() {
    char temp1, temp2;
    int tc;
    scanf("%d", &tc);
    getchar();

    for (int t = 1; t <= tc; t++) {
        int pos_x = 0, pos_y = 0;
        scanf("%c%d %c%d", &temp1, &pos_y, &temp2, &target_y);
        getchar();
        pos_x = temp1 - 'A' + 1;
        target_x = temp2 - 'A' + 1;
        
	
		if (pos_x == target_x && pos_y == target_y){
			printf("Case #%d: 0\n", t);
		} else {
        F(pos_x, pos_y, 0);
        int min_moves = 6;
		
        for (int i = 0; i < 7; i++) {
            if (arr[i] > 0 && arr[i] < min_moves) {
                min_moves = arr[i];
            }
        }
        
        printf("Case #%d: %d\n", t, min_moves);
			
        for (int i = 0; i < 7; i++) {
            arr[i] = 0;
        }
		}
    }
    return 0;
}

