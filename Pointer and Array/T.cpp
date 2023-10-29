#include <stdio.h>
#include <string.h>
int main(){
	int tc;
	char msg[1001], msg2[1001];
	unsigned int key[1001]={0};
	scanf("%d", &tc); getchar();
	for(int i = 1; i<=tc; i++){
		scanf("%[^\n]", msg); getchar();
		strcpy(msg2, msg);
		int len=strlen(msg);
		printf("Case #%d:\n", i);
		for(int j=0; j<len;j++){
			if(msg[j]!='A' | msg[j]!='E' | msg[j]!='I' | msg[j]!='U' | msg[j]!='O'){
				if(msg[j]=='B' | msg[j]=='C' | msg[j]=='D'){
					msg[j]='A';
				}
				if(msg[j]=='F' | msg[j]=='G' | msg[j]=='H'){
					msg[j]='E';
				}
				if(msg[j]=='J' | msg[j]=='K' | msg[j]=='L' | msg[j]=='M' | msg[j]=='N'){
					msg[j]='I';
				}
				if(msg[j]=='P' | msg[j]=='Q' | msg[j]=='R' | msg[j]=='S' | msg[j]=='T'){
					msg[j]='O';
				}
				if(msg[j]=='V' | msg[j]=='W' | msg[j]=='X' | msg[j]=='Y' | msg[j]=='Z'){
					msg[j]='U';
				}
			} 
			printf("%c", msg[j]);
		}
		printf("\n");
		for(int j = 0 ; j<len;j++){
			key[j]=msg2[j]-msg[j];
			printf("%d", key[j]);
		}
		printf("\n");
	}
	
	return 0;
	
}
