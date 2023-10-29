#include <stdio.h>

int main() {
    int tc;
    scanf("%d", &tc);
    getchar(); // Consume the newline character after reading tc

    for (int i = 1; i <= tc; i++) {
        char string[100001];
        scanf(" %[^\n]", string); // Note the space before %[^\n] to skip leading whitespace
        getchar(); // Consume the newline character after reading the string

        int count = 0;
        int x = 0;

        // Count the distinct characters
        while (string[x] != '\0') {
            int isDistinct = 1;

            for (int j = 0; j < x; j++) {
                if (string[j] == string[x]) {
                    isDistinct = 0;
                    break;
                }
            }

            if (isDistinct) {
                count++;
            }

            x++;
        }

        if (count % 2 == 0) {
            printf("Case #%d: Yay\n", i);
        } else {
            printf("Case #%d: Ewwww\n", i);
        }
    }

    return 0;
}

