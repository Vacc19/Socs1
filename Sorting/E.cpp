#include <stdio.h>
#include <string.h>

struct Temp {
    char City[1001];
    float temperature;
    char Type;
    float realtemperature;
};

void swap(struct Temp *a, struct Temp *b) {
    struct Temp temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(struct Temp arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].realtemperature == arr[j + 1].realtemperature) {
                if (strncmp(arr[j].City, arr[j + 1].City, sizeof(arr[j].City)) > 0) {
                    swap(&arr[j], &arr[j + 1]);
                }
            }
            if (arr[j].realtemperature > arr[j + 1].realtemperature) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    FILE * mf = fopen("testdata.in", "r");
    struct Temp arr[101];
    int tc = 0;

    while (!feof(mf)) {
        fscanf(mf, "%[^#]#%f#%c\n", arr[tc].City, &arr[tc].temperature, &arr[tc].Type);
        if (arr[tc].Type == 'F') arr[tc].realtemperature = (arr[tc].temperature - 32) * 5 / 9;
        if (arr[tc].Type == 'C') arr[tc].realtemperature = arr[tc].temperature;
        tc++;
        
    }

    bubbleSort(arr, tc);

    for (int i = 0; i < tc; i++) {
        printf("%s is %.2f%c\n", arr[i].City, arr[i].temperature, arr[i].Type);
    }

    fclose(mf);

    return 0;
}

