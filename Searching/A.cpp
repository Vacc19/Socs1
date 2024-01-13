#include <stdio.h>
#include <string.h>

struct File{
    char original[105];
    char shortcut[105];
    char search[105];
};

int main(){

    FILE *fp = fopen("testdata.in", "r");

    int T;
    fscanf(fp, "%d\n", &T);
    // printf("%d\n", T);

    struct File Arr[1010];
    char check[] = " ";

    for (int i = 0; i < T; i++){
        fscanf(fp, "%[^#]#%s\n", &Arr[i].shortcut, &Arr[i].original); //getchar();
    }
    // for (int i = 0; i < T; i++){
    //     printf("%s %s\n", Arr[i].shortcut, Arr[i].original);
    // }

    int N;
    fscanf(fp, "%d\n", &N);
    // printf("%d\n", N);

    for (int i = 0; i < N; i++){
        fscanf(fp, " %[^\n]", &Arr[i].search); 
    }

    // for (int i = 0; i < N; i++){
    //     printf("%s\n", Arr[i].search);
    // }

    // int j = 0;
    // char *portion = strtok(Arr[j].search, check);
    // printf("%s\n", portion);

    for (int i = 0; i < N; i++){
        
        char *portion = strtok(Arr[i].search, check);
        int flag = 1;

        printf("Case #%d:\n", i+1);
        
        while(portion != NULL){

            // printf("%s, ", portion);
            
            for (int k = 0; k < T; k++){
                if(strcmp(portion, Arr[k].shortcut) == 0){

                    if(flag != 1){
                        printf(" ");
                    }
                    printf("%s", Arr[k].original);
                    flag = 0;
                    break;
                }
                else if(k+1 == T){
                    if(flag != 1){
                        printf(" ");
                    }
                    printf("%s", portion);
                    flag = 0;
                }
            }
            portion = strtok(NULL, check);
        }

        printf("\n");
    }

    fclose(fp);

    return 0;
}
