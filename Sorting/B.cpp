#include<stdio.h>
#include<string.h>

struct Plant {
    int ID;
    char Name[41];
};

void swap(struct Plant *a, struct Plant *b) {
    struct Plant temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(struct Plant arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j].Name, arr[j + 1].Name) > 0) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    FILE *mf = fopen("testdata.in", "r");
    int number;
    fscanf(mf, "%d", &number);

    struct Plant arr[1001];

    for (int i = 0; i < number; i++) {
      
        fscanf(mf, "%d#%[^\n]\n", &arr[i].ID, arr[i].Name);
    }

    fclose(mf);

    bubbleSort(arr, number);

    for (int i = 0; i < number; i++) {
        printf("%d %s\n", arr[i].ID, arr[i].Name);
    }

    return 0;
}

