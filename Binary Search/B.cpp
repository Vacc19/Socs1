#include <stdio.h>

double square(double N){
	double total = (N * (N+1) * (2.0*N+1.0)) / 6.0;
	return total;
}

double binarysearch(double left, double right, double M){
	
	double temp;	
	
	while(left <= right){
		unsigned long long mid = (left + right)/2;
		double temp2 = square(mid);
		if(temp2 >= M){
			temp =  mid;
			right = mid-1;
		}
		
		else{
			left = mid+1;
		}
	
	}
	return temp;	
}

int main(){
	
	int T;
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		double M;
		scanf("%lf", &M);
		double res = binarysearch(0, 1000000000000000005, M);
		printf("Case #%d: %0.lf\n", i+1, res);		
	}
	return 0;
}
