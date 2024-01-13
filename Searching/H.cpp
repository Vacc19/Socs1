#include <stdio.h>
void bubbleSort(unsigned long long int arr[], int n){
	for(int i = 0 ; i<n-1 ; i++){
		for(int j = i+1 ; j<n ; j++ ){
			if(arr[i]>arr[j]){
				unsigned long long int temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int main(){
	int mission;
	scanf("%d", &mission);
	unsigned long long int boss[101];
	for(int i = 0 ; i < mission ; i++) scanf("%llu", &boss[i]);

//	for(int  i = 0 ; i < mission ; i++) printf("%d ", boss[i]);
//	puts(" ");
	bubbleSort(boss,mission);
	unsigned long long int power;
	scanf("%llu", &power);
	int count = 0;
	for(int i = 0 ; i < mission ; i++) if(boss[i]<=power){
	count++;
	power-=boss[i];
	} 
	printf("%d\n", count);
}
