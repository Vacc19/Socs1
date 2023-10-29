#include <stdio.h>

int main(){
	char arr[101];
	int tc, count, value, length;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		count = 0;
		value = 0;
		length =0;
		scanf("%s", arr);
			printf("Case #%d: ", i);
			while (arr[length] != '\0') {
        length++;}
			
		for(int j = 1; j<=length; j++ ){
			if((arr[j]==arr[j-1] && arr[j]=='.' || arr[length-1]=='.' || arr[0]=='.')){
				value = 1;
				printf("NO\n");
				break;
			}
			if(arr[j]=='.' && (arr[j+1] >= '0' && arr[j+1]<='9') && (arr[j-1] >= '0' && arr[j-1]<='9') && arr[j+1]!=0){
				count++;
			}
		}
		if(count==5){
			printf("YES\n");
		} else if(value == 0){
			printf("NO\n");
		}
	}
	return 0;
}

