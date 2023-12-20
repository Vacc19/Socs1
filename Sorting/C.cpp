#include<stdio.h>
#include<string.h>
struct Mahasiswa{
	char ID[11];
	char Name[21];
};

void swap(struct Mahasiswa *a, struct Mahasiswa *b){
	struct Mahasiswa temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(struct Mahasiswa arr[], int n){
	for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j].ID, arr[j + 1].ID) > 0) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }

	
}



int main(){
	FILE * mf = fopen("testdata.in", "r");
	int number;
	fscanf(mf,"%d", &number);
	struct Mahasiswa arr[1001];
	for(int i = 0 ; i< number ; i++){
		fscanf(mf,"%s %s\n", arr[i].ID , arr[i].Name);
	}
	
	fclose(mf);

	bubbleSort(arr, number);

	for(int i = 0 ; i< number ; i++){
		printf("%s %s\n", arr[i].ID , arr[i].Name);
	}

	return 0;
}
