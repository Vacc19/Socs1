#include<stdio.h>
#include<string.h>
struct Mahasiswa{
	int Score;
	char Name[1001];
};

void swap(struct Mahasiswa *a, struct Mahasiswa *b){
	struct Mahasiswa temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(struct Mahasiswa arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
        	if(arr[j].Score == arr[j+1].Score){
            if (strcmp(arr[j].Name, arr[j + 1].Name) > 0) {
                swap(&arr[j], &arr[j + 1]);
            }
			}
			if(arr[j].Score < arr[j+1].Score){
				swap(&arr[j], &arr[j + 1]);
			}
        }
    }
}
int main(){
	int tc;
	scanf("%d\n",&tc);
	for(int t = 1 ; t<=tc ; t++){
	
		int num;
		struct Mahasiswa arr[1001];
		char find[1001];
		scanf("%d",&num); getchar();
		for(int i = 0 ; i< num ;i++){
			scanf("%[^#]#%d", arr[i].Name , &arr[i].Score); getchar();
		}
		bubbleSort(arr,num);
		scanf("%s", find); getchar();
		for(int i = 0 ; i< num ;i++){
			if (strcmp(arr[i].Name, find) == 0){
				printf("Case #%d: %d\n", t, i+1);
			}
		}
	}

	return 0;
}
