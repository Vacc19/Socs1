#include <stdio.h>

int funct(int a, int *count) {
    if (a == 0) {
        return 1;
    }
    if (a == 1) {
        return 2;
    }
    if (a % 3 == 0) {
        (*count)++;
    }
    if (a % 5 == 0) {
        return a * 2;
    }

    return funct(a - 1, count) + a + funct(a - 2, count) + a - 2;
}

int main() {
    int tc;
    int b;
    scanf("%d", &tc);
    for (int t = 1; t <= tc; t++) {
        int count = 0;
        scanf("%d", &b);

        printf("Case #%d: %d ", t, funct(b, &count));
        printf("%d\n", count);
    }

    return 0;
}

