#include <stdio.h>

 
int main()
{

    int x, y=0, tc;
 	scanf("%d", &tc);
 	
 	for(int i = 1;i<=tc;i++){
 
	scanf("%d", &x); getchar();
    y = x + y;
}
	printf("%d\n", y);
    return 0;
}
