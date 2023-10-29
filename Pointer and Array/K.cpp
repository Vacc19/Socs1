#include <stdio.h>
int main(){
	int tc;
	int x;
	char arr[1001];
	scanf("%d", &tc);
	for(int i=1;i<=tc;i++){
		scanf("%s", &arr); getchar();
		for (x = 0; arr[x] != '\0'; ++x);
		printf("Case #%d : ", i);
		for(int j=x-1;j>=0;j--){
			printf("%c", arr[j]);
		}
		printf("\n");
	}
	return 0;
}
