#include<stdio.h>
void quicksort(double arr[], const int begin, const int end){
    int i = begin - 1;
    for (unsigned int j = begin; j <= end; ++j){
        if (arr[j] <= arr[end]){
            if (j > ++i){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    if (i - begin > 1) quicksort(arr, begin, i - 1);
    if (end - i > 1) quicksort(arr, i + 1, end);
}
int main(){
	int t;
	scanf("%d", &t);
	for(int tc = 1 ; tc <= t ; tc++){
		int num;
		double arr[5001];
		double mean = 0, median = 0 ;
		scanf("%d", &num);
		for(int i = 0 ; i < num ; i++){
			scanf("%lf", &arr[i]); 
			mean+=arr[i];
			}
		quicksort(arr,0,num-1);
		mean/=num;
		if(num%2==1) median =  arr[(num-1)/2];
		else median = (arr[num/2]+ arr[(num/2)-1])/2;
		printf("Case #%d:\n", tc);
		printf("Mean : %.2lf\n", mean);
		printf("Median : %.2lf\n", median);
		 
	}
	return 0;
}
