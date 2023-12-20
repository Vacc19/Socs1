#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
 
}

int bubbleSort(int arr[], int n, int count) {
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < n - i 	; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                count++;
            }
        }
    }
    return count;
}

int main() {
    int tc;
    scanf("%d", &tc);

    for (int t = 1; t <= tc; t++) {
        int num;
        long int minute;
        int arr[501];
        scanf("%d %ld", &num, &minute);

        for (int i = 0; i < num; i++) {
            scanf("%d", &arr[i]);
        }
    	long int count = bubbleSort(arr, num - 1,0);
//		for(int i = 0 ; i<num ; i ++) printf("%d ", arr[i]);
    	long int ans = count*minute;
        printf("Case #%d: %ld\n", t, ans);
    }

    return 0;
}

