#include<stdio.h>
#include<string.h>
void F(char str[], int b){
	int value=0;
	for(int i=0; i<b;i++){
		if(str[i]!=str[b-i-1]){
		value=1;
		break;	
		}	
	}
	
	if (value == 0) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
}

int main(){
	int tc;
	char a[1001];
	scanf("%d", &tc); getchar();
	for(int t = 1 ; t<=tc;t++){
		scanf("%[^\n]", a); getchar();
		printf("Case #%d: ", t);
		F(a,strlen(a));
	}
	return 0;
}

