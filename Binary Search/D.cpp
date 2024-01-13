#include <stdio.h>

void swap(unsigned long long int *a, unsigned long long int *b){
    unsigned long long int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(unsigned long long int Arr[], int low, int high){
    unsigned long long int pivot = Arr[high];
    int i = low;

    for (int j = low; j < high; j++){
        if(Arr[j] < pivot){
            swap(&Arr[i], &Arr[j]);
            i++;
        }
    }
    swap(&Arr[i], &Arr[high]);
    return i;
}

void recursion(unsigned long long int Arr[], int low, int high){
    if(low < high){
        unsigned long long int piv = partition(Arr, low, high);

        recursion(Arr, low, piv-1);
        recursion(Arr, piv+1, high);
    }
}

void quicksort(unsigned long long int Arr[], int len){
    recursion(Arr, 0, len-1);
}

int main(){

    unsigned long long int T;
    unsigned long long int N;
    unsigned long long int A;

    scanf("%llu", &T);

    for(int k = 0; k < T; k++){
        scanf("%llu %llu", &A, &N); 

        unsigned long long int Arr[99999];
        for (int i = 0; i < A; i++){
            scanf("%llu", &Arr[i]);
        }

        unsigned long long int count = 0;
        unsigned long long int curr = 0;
        // unsigned long long int store[99999] = {0};
        unsigned long long int max = 0;


        for (int i = 0; i < A; i++){

            curr = 0; 
            count = 0;

            for (int j = i; j < A; j++){
                if(curr + Arr[j] <= N){
                    curr += Arr[j];
                    count++;
                }
                else{
                    break;
                }
            }
            // if(Arr[i] == N){
            //     count = 1;
            //     // store[i] = count;
            //     // count = 0;
            //     curr = 0;
                
            // }
            // else if(curr + Arr[i] <= N){
            //     count++;
            //     curr += Arr[i];
                // if((curr + Arr[i+1] > N) && i+1 != N){
                //     store[i] = count;
                //     count = 1;
                //     curr = Arr[i];
                // }
                // else if(i+1 == N){
                //     store[i] = count;
                //     count = 1;
                //     curr = Arr[i];
                // }
            // }
            // else{
            //     curr = 0;
            // }

            if(count > max){
                max = count;
            }
        }
            
        // for (int i = 0; i < A; i++){
        //     if(store[i] != 0){
        //         if(store[i] > max){
        //             max = store[i];
        //         }
        //     } 
        // }

        if(max == 0){
            printf("Case #%d: -1\n", k+1);
        }
        else{
            printf("Case #%d: %llu\n", k+1, max);
        }
    }

    return 0;
}
