#include <stdio.h>
#include <string.h>

void rev(char str[], int b) {
    for (int i = b - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    int tc;
    scanf("%d", &tc);
    getchar(); 

    for (int t = 1; t <= tc; t++) {
        char str1[1001];
        scanf(" %[^\n]", str1); 
        printf("Case #%d: ", t);
        rev(str1, strlen(str1));
    }

    return 0;
}

