#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int sequence[N];
    int values[N];
    int result[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &sequence[i]);
    }
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &values[i]);
    }

    for (int i = 0; i < N; i++) {
        result[sequence[i]] = values[i];
    }

    for (int i = 0; i < N; i++) {
    	if(i!=N-1){
		
        printf("%d ", result[i]);}
        else{
        	printf("%d\n", result[i]);
		}
    }

    return 0;
}

