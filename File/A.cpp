#include <stdio.h>
#include <string.h>

struct Plant {
    char name[41];
    char species[41];
};

int main(){
	FILE * mf = fopen("testdata.in", "r");
	int num;
	struct Plant arr[101];
	fscanf(mf, "%d\n", &num);
	for(int i = 0 ; i < num ; i++){
		fscanf(mf, "%[^#]#%[^\n]\n", arr[i].name, arr[i].species);
	}
	
	int tc;
	char name[41];
	fscanf(mf, "%d\n", &tc);
	for(int t = 1 ; t<= tc; t++){
	int flag=0;
	fscanf(mf, "%[^\n]\n", name); 
	for(int i = 0; i < num ; i++){
		if(strcmp(name, arr[i].name) == 0){
			flag = 1;
			printf("Case #%d: %s\n", t, arr[i].species);
			break;
		}
	}
	if(flag == 0) printf("Case #%d: N/A\n", t);		
		
	}
	return 0;
}
