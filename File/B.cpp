#include <stdio.h>
#include <string.h>
int main(){
	FILE * mf = fopen("testdata	.in", "r");
	int t;
	fscanf(mf,"%d\n", &t);
	for(int tc = 1 ; tc<=t ; tc++){
		int shift;
		char sentence[1001];
		fscanf(mf,"%d\n",&shift);
		fscanf(mf,"%[^\n]\n", sentence);
		for(int i = 0; i<strlen(sentence); i++){
			if(sentence[i]=='0') sentence[i]='O';
			if(sentence[i]=='1') sentence[i]='I';
			if(sentence[i]=='3') sentence[i]='E';
			if(sentence[i]=='4') sentence[i]='A';
			if(sentence[i]=='5') sentence[i]='S';
			if(sentence[i]=='6') sentence[i]='G';
			if(sentence[i]=='7') sentence[i]='T';
			if(sentence[i]=='8') sentence[i]='B';
		}
		for(int i = 0 ; i<strlen(sentence); i++){
			if(sentence[i]!=' ') sentence[i]-=shift%26;
			if(sentence[i]<'A' && sentence[i]!=' ') sentence[i]+=26;
		}
		printf("Case #%d: %s\n", tc, sentence);
	}
	

	return 0;
}
