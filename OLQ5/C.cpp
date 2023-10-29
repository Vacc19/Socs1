#include <stdio.h>
int main() {
    int tc, x, value, t, n;
    char a[1001];
    
    scanf("%d", &tc);
    getchar(); 
    
    for (int i = 1; i <= tc; i++){
        value = 0;

        scanf("%[^\n]", a);
        getchar(); 
        
        printf("Case #%d: ", i);
        
  
        for (x = 0; a[x] != '\0'; ++x);
        x -= 1;

        for (n = 0, t = x; n <= x - 1 && t >= 0; n++, t--){
            if (a[n] != a[t]) {
                value = 1;
                break; 
            }
        }
        
        if (value == 0) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}

