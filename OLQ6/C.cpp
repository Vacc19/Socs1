#include <stdio.h>

int main() {
    int n, maxCount = 0, count;

     int arr[1001];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
        }
    }

    printf("%d\n", maxCount);

    return 0;
}
