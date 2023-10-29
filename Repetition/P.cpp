#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        long long int finish;
        scanf("%lld", &finish);

        int count = 0;
        long long int total = 0;

        while (total < finish) {
            count++;
            total += count;
        }

        printf("Case #%d: %d\n", i, count);
    }

    return 0;
}

