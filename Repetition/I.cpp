#include <stdio.h>
int main(){
	int N, J, L, B, O[101], total = 0;
	scanf("%d", &N);
	scanf("%d %d %d", &J, &L, &B);
	for(int i =0; i<N; i++){
		scanf("%d", &O[i]);
		total = total + O[i];
	}
	total = total + J + L + B;
	total = total / (N+3);
	if(J>=total){
		printf("Jojo lolos\n");
	}
	else if(J<total){
		printf("Jojo tidak lolos\n");
	}
	if(L>=total){
		printf("Lili lolos\n");
	}
	else if(L<total){
		printf("Lili tidak lolos\n");
	}
	if(B>=total){
		printf("Bibi lolos\n");
	}
	else if(B<total){
		printf("Bibi tidak lolos\n");
	}
	
}
