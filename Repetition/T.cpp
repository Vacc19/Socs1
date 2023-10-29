#include <stdio.h>
int main(){
	long int tc, count=0;
	int  X, Y, Z;

	scanf("%ld", &tc);
	for(int i=0; i<tc;i++){
		scanf("%d %d %d",&X,&Y,&Z);
		if(Z<Y){
			count++;
		}

	}
	printf("%d\n", count);
	
	return 0;
}
