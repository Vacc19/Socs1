#include<stdio.h>
#include<string.h>
int main(){
	char s[10001];
	scanf("%[^\n]", s);
	int len=strlen(s);
	for(int i = 0; i<len ; i++){
		if(s[i]>='a' && s[i]<='z'){
			s[i]-=32;
		}
		switch (s[i]) {
        case 'I':
            s[i]='1';
            break;
 
        case 'R':
            s[i]='2';
            break;
 
        case 'E':
            s[i]='3';
            break;
            
        case 'A':
            s[i]='4';
            break;
        
        case 'S':
            s[i]='5';
            break;
        
        case 'G':
            s[i]='6';
            break;
        
        case 'T':
            s[i]='7';
            break;
            
        case 'B':
            s[i]='8';
            break;
            
        case 'P':
            s[i]='9';
            break;
            
        case 'O':
            s[i]='0';
            break;
 
        default:
        
            break;
    }
	}
	for(int i = 0; i<len; i++){
		printf("%c", s[i]);
		
	}
		printf("\n");
	return 0;
}
