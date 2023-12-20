#include<stdio.h>
#include<string.h>

struct Video {
    char Title[1001];
    char Creator[1001];
    int Views;
};

void swap(struct Video *a, struct Video *b) {
    struct Video temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(struct Video arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
        	if(arr[j].Views == arr[j+1].Views){
            	if (strcmp(arr[j].Title, arr[j + 1].Title) > 0) {
                	swap(&arr[j], &arr[j + 1]);
            	}
			}
			if(arr[j].Views < arr[j+1].Views){
				swap(&arr[j], &arr[j + 1]);
			}
        }
    }
}

int main() {
    FILE *mf = fopen("testdata.in", "r");
    int number=0;
    

    struct Video arr[101];

    while (!feof(mf)) {
        fscanf(mf, "%[^#]#%[^#]#%d\n", arr[number].Title , arr[number].Creator , &arr[number].Views);
      	number++;
    }

    fclose(mf);

    bubbleSort(arr, number+1);

    for (int i = 0; i < number; i++) {
        printf("%s by %s - %d\n", arr[i].Title, arr[i].Creator, arr[i].Views);
    }

    return 0;
}

