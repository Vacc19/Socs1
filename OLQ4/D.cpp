#include <stdio.h>

int main(){
	int Line, Length;
	char String[101], Result[101];
	
	scanf("%d", &Line);
	
	for(int i = 1; i<=Line; i++)
	{
		scanf("%d", &Length); getchar();
			for(int x = 0; x <= Length; x++ ){
				scanf("%c", &String[x]);

					}
		printf("Case #%d: ", i);
			for(int x = 0; x <= Length; x++ ){

			 	if(String[x] > 96 && String[x] < 123  ){
					printf("%c", String[x]); }
				else
				{
				continue;
					}
					
			 	}
		printf("\n");
	}		
	return 0;
}
