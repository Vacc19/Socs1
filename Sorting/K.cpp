#include<stdio.h>

void quickSort(long int str[], const short begin, const unsigned short end){
    short i = begin - 1;
    for (unsigned short j = begin; j <= end; ++j){
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

int main(){
	int tc;
	scanf("%d", &tc);
	for(int t = 1 ; t <= tc; t++){
		long int arr[25];
		for(int i = 0; i < 25 ; i++){
			scanf("%ld", &arr[i]);
		}
		quickSort(arr , 0 , 24 );
		long int ans[5];
		ans[0]=arr[0]/2;
		ans[1]=arr[1]-ans[0];
		ans[4]=arr[24]/2;
		ans[3]=arr[23]-ans[4];
		if(arr[3]==arr[4]) ans[2]=arr[3]-ans[0];
		else if(arr[3]==ans[1]*2) ans[2]=arr[4]-ans[0];
		else if(arr[4]==ans[1]*2) ans[2]=arr[3]-ans[0];
		// for(int i = 0; i < 25 ; i++){
		// 	printf("%ld ", arr[i]);
		// }
		// printf("\n");
		printf("Case #%d:", t);
		
		for(int i = 0 ; i < 5 ; i++){
			printf(" %ld", ans[i]);
		}
		

		printf("\n");
		
	}	
	return 0;
}
