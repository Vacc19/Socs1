#include <stdio.h>

char map[101][101];
int n, m;

int F(int x, int y) {
    if (x < 0 || y < 0 || x >= n || y >= m || map[x][y] == '#' || map[x][y] == 'V') {
        return 0;
    }

    if (map[x][y] == '*') {
        map[x][y] = '#'; 
        return 1 + F(x + 1, y) + F(x, y + 1) + F(x, y - 1) + F(x - 1, y);
    }

    map[x][y] = '#'; 

    return F(x + 1, y) + F(x, y + 1) + F(x, y - 1) + F(x - 1, y);
}

int main() {
    int tc, posx, posy;
    scanf("%d", &tc);

    for (int t = 1; t <= tc; t++) {
        scanf("%d %d", &n, &m);
        getchar();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf(" %c", &map[i][j]);
                if (map[i][j] == 'P') {
                    posx = i;
                    posy = j;
                }
            }
            getchar();
        }

        printf("Case #%d: %d\n", t, F(posx, posy));
    }

    return 0;
}

