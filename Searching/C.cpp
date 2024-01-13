#include<stdio.h>
void remove(int arr[], int num , int total){
	for(int i = 0 ; i< total ; i++){
		if(arr[i]==num){
			arr[i]=0;
		}
	}
}
int main(){
	int num , rem;
	int numarr[101];
	scanf("%d %d", &num,&rem);
	for(int i = 0; i<num ; i++ ){
		scanf("%d", &numarr[i]);
	}
	for(int i = 0 ; i < rem ; i++){
		int temp;
		scanf("%d", &temp);
		remove(numarr,temp, num);
	}
//	for(int i = 0; i<num ; i++ ){
//		printf("%d ", numarr[i]);
//	}
//	printf("\n");
	int greatest = 0;
	for(int i = 0 ; i<num;i++){
		if(numarr[i]>greatest) greatest =numarr[i];
	}
	if(greatest==0) greatest = -1;
	printf("Maximum number is %d\n", greatest);
	
	return 0;
}
