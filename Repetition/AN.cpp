#include <stdio.h>
int main(){
	int tc,a,b,c,d,e,f;
	scanf("%d", &tc);
	for(int i = 1; i<=tc;i++){
		scanf("%d %d %d %d %d %d", &a, &b,&c,&d,&e,&f);
		printf("Case #%d: ", i);
		for(int j=0;j<a;j++){
			printf("a");
		}
		for(int j=0;j<b;j++){
			printf("s");
		}
		for(int j=0;j<c;j++){
			printf("h");
		}
		for(int j=0;j<d;j++){
			printf("i");
		}
		for(int j=0;j<e;j++){
			printf("a");
		}
		for(int j=0;j<f;j++){
			printf("p");
		}
		printf("\n");

	}
	
	
	
	return 0;
}
