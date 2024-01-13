#include <stdio.h>

long long int binarySearch(long long int tc, long long int num[], long long int searchNum){
	
	long long int max = 0;
	long long int keep = 0;
	long long int sum = 0;
	
	for(int i=0; i<tc; i++){
		
		if(sum + num[i] <= searchNum){
			sum += num[i];
			keep++;
			
			if(keep > max){
				max = keep;
			}
		}
		else{
			while(sum + num[i] > searchNum && keep > 0){
				sum -= num[i-keep];
				keep--;
			}
			sum += num[i];
			keep++;
			
			if(keep > max){
				max = keep;
			}
		}
	}
	
	return max;
}

int main(){
	
	long long int T;
	scanf("%lld", &T); getchar();
	
	long long int Arr[T];
	for (int i = 0; i < T; i++){
		scanf("%lld", &Arr[i]); getchar();
	}
	
	long long int TNum;
	scanf("%lld", &TNum); getchar();
	
	long long int sNum;
	for(int i=1; i<=TNum; i++){
		scanf("%lld", &sNum); getchar();
		
		long long int res = binarySearch(T, Arr, sNum);
		
		printf("Case #%d: ", i);
		if(res >= 0){
			printf("%lld\n", res);
		}
		else{
			printf("-1\n");
		}
	}
	
	return 0;
}
