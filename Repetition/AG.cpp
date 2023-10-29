#include <stdio.h>
int main(){
	long long int tc, cut, piece = 1;
	scanf("%lld", &tc);
	for(int i=1;i<=tc;i++){
		piece = 1;
		scanf("%lld", &cut);
		printf("Case %lld: ", i);
		for(int j=0; j<cut;j++){
			piece += j;
			if(j<cut-1){
	
			printf("%lld ", piece);}
			else{
			printf("%lld\n", piece);
			}
		}

	}
	return 0;
}

