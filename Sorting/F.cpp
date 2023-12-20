#include <stdio.h>
#include <string.h>
struct ass{
	char subject[11];
	int deadline;
};

void swap(struct ass *a, struct ass *b) {
    struct ass temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(struct ass arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (arr[j].deadline == arr[j + 1].deadline) {
                if (strcmp(arr[j].subject, arr[j + 1].subject) > 0) {
                    swap(&arr[j], &arr[j + 1]);
                }
            }
            if (arr[j].deadline > arr[j + 1].deadline) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
int main(){

	int num;
	scanf("%d", &num); getchar();
	struct ass arr[101];
	for(int n = 0 ; n < num ; n++){
		scanf("%s %d", arr[n].subject , &arr[n].deadline); getchar();
	}
	bubbleSort(arr, num-1);

	for(int n = 0 ; n< num ; n++) printf("%s\n",arr[n].subject);
	return 0;
}
