#include <stdio.h>
int main(){
	long int X,Y,arr1[100001],arr2[100001], count = 0, high = 0;
	scanf("%ld %ld", &X, &Y);
	for(int i = 0; i<X;i++){
		scanf("%ld", &arr1[i]);
	}

	for(int i = 0; i<Y;i++){
		scanf("%ld", &arr2[i]);
	}

	for(int i= 0; i<Y;i++){
		if(arr2[i]>arr2[high])
		{
			high = i;
		}
		
		
	}
	
	
	for(int i = 0; i<X;i++){

		if(arr1[i]>arr2[high]){
			count++;
		}
	}
	if(count++ < 1){
		printf("Secret debunked\n");
	}
	else {
		printf("The dark secret was true\n");
	}

	
	
	
	return 0;
}
