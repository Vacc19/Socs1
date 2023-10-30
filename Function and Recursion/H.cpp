#include <stdio.h>
#include <string.h>

char a[10000], b[10000], c[10000];
int z;
int count;

void F() {
    count++;
    strcpy(c, a);
    strcpy(a, b);
    strcat(b, c);
    if (count != z) {
        F();
    }
}

int main() {
    int tc;
    scanf("%d", &tc);
    getchar();

    for (int t = 1; t <= tc; t++) {
        count = 1;

        scanf("%d %s %s", &z, a, b);
        getchar(); 
		
        if(z>1){
        F();
        printf("Case #%d: %s\n", t , b);
        
    	} else if(z==1){
    		printf("Case #%d: %s\n", t , b);
		} else if(z==0){
    		printf("Case #%d: %s\n", t , a);
		}
    }

    return 0;
}

