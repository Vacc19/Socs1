#include <stdio.h>
int main(){
	int tc, a, count;
	scanf("%d", &tc);
	for(int i=0;i<tc;i++){
		scanf("%d", &a);
		if(a==1){
			count++;
		}
	}
	if(count>0){
		printf("not ");
	}
	printf("easy\n");
	return 0;
}
