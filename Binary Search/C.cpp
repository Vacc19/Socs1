#include <stdio.h>

unsigned long long int binary(unsigned long long int Arr[], unsigned long long int left, unsigned long long int right, unsigned long long int target){
    if(target < Arr[left]){
        return 0;
    }

    if(target > Arr[right]){
        return right+1;
    }
    
    while(left <= right){
        unsigned long long int mid = (left + right) / 2;

        if(Arr[mid] == target){
            return mid+1;
        }

        if(Arr[mid] < target){ // misal arr mid 16 target 22
            left = mid+1;
            if(target < Arr[mid+1]){
                return mid+1;
            }
        }
        else if(Arr[mid] > target){
            right = mid-1;
        }
    }

    return 0;
}

int main(){

    unsigned long long int N;
    scanf("%llu", &N);

    unsigned long long int Arr[99999];
    unsigned long long int store[99999] = {0};
    for (int i = 0; i < N; i++){
        scanf("%llu", &Arr[i]);
        if(i == 0){
            store[i] = Arr[i]; 
        }
        else{
            store[i] = Arr[i] + store[i-1]; 
        }
    }

    // for (int i = 0; i < N; i++){
    //     printf("%llu ", store[i]);
    // }
    // printf("\n");

    unsigned long long int T;
    scanf("%llu", &T);

    unsigned long long int S;
    for (int i = 0; i < T; i++){
        scanf("%llu", &S);

        unsigned long long int index = binary(store, 0, N-1, S);

        if(index == 0){
            printf("Case #%d: -1\n", i+1);
        }
        else{
        printf("Case #%d: %llu\n", i+1, index);
        }
       
    }

    return 0;
}
