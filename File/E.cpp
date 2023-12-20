#include <stdio.h>
int main(){
	FILE * mf = fopen("testdata.in", "r");
	int t;
	fscanf(mf,"%d\n", &t);
	for(int tc = 1 ; tc<=t ; tc++){
		int num;
		int arr[1001];
		int perimeter = 0;
		int area = 0;
		fscanf(mf,"%d", &num);
		for(int  i = 0 ; i<num ; i++){
			fscanf(mf,"%d", &arr[i]);
			area += 4*arr[i];
			if(i==0){
			perimeter += arr[i]*2 + arr[i]*2 + 4;
			}
			else{
			if(arr[i]>arr[i-1])perimeter += 4 + arr[i]*2 + arr[i]*2 - arr[i-1]*4;
			if(arr[i]<=arr[i-1])perimeter += 4;
					
			}
		}		
		printf("Case #%d: %d %d\n", tc, perimeter, area);
	}
	
	
	fclose(mf);
	return 0;
}
