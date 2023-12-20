#include <stdio.h>
void quickSort(int str[], const int begin, const int end){
    int i = begin - 1;
    for (unsigned int j = begin; j <= end; ++j){
        if (str[j] <= str[end]){
            if (j > ++i){
                int temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    if (i - begin > 1) quickSort(str, begin, i - 1);
    if (end - i > 1) quickSort(str, i + 1, end);
}

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + ((right - left)/2	);
        if (arr[mid] == target) {
            return mid + 1;
        }  
        if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
	int num;
	int arr[1000001];
	scanf("%d", &num);
	for(int i = 0 ; i < num ; i++ ) scanf("%d", &arr[i]);
	quickSort(arr,0,num-1);
	int tc;
	scanf("%d", &tc);
	for(int i = 0 ; i < tc ; i++){
		int search;
		scanf("%d", &search);
		printf("%d\n", binarySearch(arr,num,search));
	}
	return 0;
}
