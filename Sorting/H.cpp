#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort1(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void bubbleSort2(char arr[][201], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j],arr[j+1])<0) {
                char temp[201];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    int R, C;
    scanf("%d %d", &R, &C); getchar();
    char str[201][201];
    for (int i = 0; i < R; i++) scanf("%s", 	str[i]);
    for (int i = 0; i < R; i++) bubbleSort1(str[i], C); 
    bubbleSort2(str, R);
    for (int i = 0; i < R; i++) printf("%s\n", str[i]);
    return 0;
}

