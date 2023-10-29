#include <stdio.h>

 
int main()
{
    char arr[1000];
    int x, tc;
 	scanf("%d", &tc);
 	
 	for(int i = 1;i<=tc;i++){
	 
    scanf("%s", &arr);getchar();
 
    for (x = 0; arr[x] != '\0'; ++x);
 
    printf("Case #%d: %d\n", i, x);
}
    return 0;
}
