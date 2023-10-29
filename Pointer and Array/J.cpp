#include<stdio.h>
int main(){
	int tc;
	char str[1001];
	int x;
	scanf("%d", &tc); getchar();
	for(int i=1; i<=tc; i++){
	scanf("%[^\n]", str); getchar();
	for (x = 0; str[x] != '\0'; ++x);
	x-=1;
	
	printf("Case %d: ", i);
	for(int j=0; j<=x; j++){
		if(j!=x){
			printf("%d-", str[j]);
		}
		else{
			printf("%d\n", str[j]);
		}
	}
	
	
	}
	return 0;
}
