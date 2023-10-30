#include <stdio.h>

int funct(long int a) {
    if (a == 1) {
        return 1;
    }
    if (a % 2 == 0) {
       return funct(a/2);
    }
    if (a % 2 == 1) {
        return funct(a-1)+funct(a+1);
    }

}

int main() {
    int tc;
    long int b;
    scanf("%d", &tc);
    for (int t = 1; t <= tc; t++) {
        scanf("%ld", &b);

        printf("Case #%d: %ld\n", t, funct(b));
    }

    return 0;
}

