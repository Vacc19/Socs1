#include<stdio.h>
void quickSort(long long int str[], int begin, int end){
    int i = begin - 1;
    for (int j = begin; j <= end; ++j){
        if (str[j] <= str[end]){
            if (j > ++i){
                long long int temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    if (i - begin > 1) quickSort(str, begin, i - 1);
    if (end - i > 1) quickSort(str, i + 1, end);
}

int main(){
	int n;
	long long int arr[100001];
	scanf("%d", &n);
	for(int i = 0 ; i < n ; i ++) scanf("%lld", &arr[i]);
	quickSort(arr,0,n-1);
//	if(n%2==1){
	
	for(int i = n/2 +1; i < n ; i++){
		if(i==n-1){
		printf("%lld\n", arr[i]);
		break;	
		}
		printf("%lld ", arr[i]);
		}

//	}
//	else{
//		for(int i = n/2; i < n ; i++){
//		if(i==n-1){
//		printf("%lld\n", arr[i]);
//		break;	
//		}
//		printf("%lld ", arr[i]	);
//		}
//	}
	return 0;
}	
