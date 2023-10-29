#include <stdio.h>
#include <string.h>

int main() {
    int tc, L, R, total;
    char num[1001], num2[1001];
    scanf("%d", &tc);
    getchar();
    for (int i = 1; i <= tc; i++) {
        scanf("%d %s", &total, num);
        getchar();
        

        for (int j = 0; j < total; j++) {
            scanf("%d %d", &L, &R);
            strcpy(num2, num);

            for (int k = 0; k < R - L + 1; k++) {
                num2[L - 1 + k] = num[R - k - 1];
            }

            strcpy(num, num2);
        }
        printf("Case #%d: %s\n", i, num);
    }
    return 0;
}

