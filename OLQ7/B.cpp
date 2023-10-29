#include <stdio.h>
#include <math.h>
int main() {
    int tc, a, value;
    scanf("%d", &tc);
    for (int i = 1; i <= tc; i++) {
        scanf("%d", &a);
        value = 0;
        printf("Case #%d : ", i);
        if(a == ((int)sqrt(a))*((int)sqrt(a))){
			printf("square");
			value=3;
		}
		
		if(a == ((int)cbrt(a))*((int)cbrt(a))*((int)cbrt(a))){
			if(a == ((int)sqrt(a))*((int)sqrt(a))){	
			printf(" ");
		}
			printf("cubic");
			value=3;
		}
		
		if(value!=3){
		
		for(int j = a-1; j>1 ; j--){
			if(a%j==0){
				value=1;
				break;
			}
			
			
		}
		if(value==0){
			printf("prime");
		}else if(value==1){
			printf("none");
		}
	}
       
        printf("\n");
    }

    return 0;
}

