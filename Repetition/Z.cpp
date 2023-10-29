#include <stdio.h>
int main(){
	long int num;
	int arr[2001];
	long int pos= 0;
	scanf("%d", &num); getchar();
	for(int i = 0; i<num;i++){
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i<num;i++){
		pos =  pos + arr[i];
		if(pos >= 40){
		pos = pos - 40;
	}
		if(pos == 30){
		pos = 10;
	}
		if(pos == 12){
		pos = 28;
	}
		if(pos == 35){
		pos = 7;
	}

	}
	
	printf("%ld\n", pos);

	return 0;
}
