#include <stdio.h>


void quickSort(int str[], const int begin, const int end){
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
	int t;
	scanf("%d", &t);
	for(int tc = 1 ; tc<=t ; tc++){
		int arr[501];
		int seat[251],seat2[251];
		int num;
		scanf("%d", &num);
		for(int i = 0 ; i < num ; i++) scanf("%d", &arr[i]);
		quickSort(arr, 0, num-1);
		for(int i = 0 ; i < num/2 ; i++) seat[i]=arr[i];
		for(int i = 0 ; i < num/2 ; i++) seat2[i]=arr[i+(num/2)];
//		quickSort(seat, 0, num/2 -1);
//		quickSort(seat2, 0 ,num/2 -1);
		int bigdiff = 0;
		for(int i = 1; i < num/2  ; i++){
			if(seat[i]-seat[i-1]>bigdiff) bigdiff = seat[i]-seat[i-1];
		}
		for(int i = 1; i < num/2 ; i++){
			if(seat2[i]-seat2[i-1]>bigdiff) bigdiff = seat2[i]-seat2[i-1];
		}

//		for(int i = 0 ; i < num/2 ; i++) printf("%d", seat[i] );
//		printf("\n");
//		for(int i = 0 ; i < num/2 ; i++) printf("%d", seat2[i] );
//		printf("\n");
		printf("Case #%d: %d\n", tc , bigdiff);
	}
	return 0;
}
