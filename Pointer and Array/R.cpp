#include <stdio.h>
#include <string.h>

int main() {
    char str[1001];
    int tc;
    int hmt;
    char ch1, ch2;

    scanf("%d", &tc);
    getchar();

    for (int i = 1; i <= tc; i++) {
        scanf("%s", str);
        scanf("%d", &hmt);
	
        for (int j = 0; j < hmt; j++) {
			getchar();
            scanf("%c %c", &ch1, &ch2);
            for (int k = 0; k < strlen(str); k++) {
                if (str[k] == ch1){
                    str[k] = ch2;
                }
            }
        }

        printf("Case #%d: %s\n", i, str);
    }

    return 0;
}

