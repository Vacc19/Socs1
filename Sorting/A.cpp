#include <stdio.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}


int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = low - 1; 

    for (int j = low; j <= high - 1; j++) {
  
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}


void quickSort(int arr[], int low, int high) {
    if (low < high) {

        int pivotIndex = partition(arr, low, high);


        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
	int N;
	int array[100001];
	int answer[100001];
	int max_value; 
	int temp;
	int max_size=0;
	int print=0;
	int pos1=2;
	int pos2=3;
	
	scanf("%d", &N);
	for(int i=0; i<N;i++) scanf("%d", &array[i]);
	
	quickSort(array, 0 ,N-1);
	
	for(int i = 1; i<N; i++){
		temp =  array[i] - array[i-1];
		if(temp<0) temp*= (-1);
		
		if(temp>max_size){
			max_size = temp;
			answer[0]=array[i-1];
			answer[1]=array[i];
			print=2;
			pos1=2;
			pos2=3;
			
			
		}
		else if(temp==max_size){
			answer[pos1]=array[i-1];
			answer[pos2]=array[i];
			print+=2;
			pos1+=2;
			pos2+=2;
		}
	}
	for(int i = 0; i< print; i++){
	if(i<print-1) printf("%d ", answer[i]);
	else if(i==print-1) printf("%d\n", answer[i]);
}	
	return 0;
}
