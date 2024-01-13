#include<stdio.h>
#include<string.h>
struct Mahasiswa{
	int ID;
	char Name[21];
};

int main(){
	FILE * mf = fopen("testdata.in", "r");
	int number;
	fscanf(mf,"%d", &number);
	struct Mahasiswa arr[101];
	for(int i = 0 ; i< number ; i++){
		fscanf(mf,"%d %s\n", &arr[i].ID , arr[i].Name);
	}
	
	int tc;
	fscanf(mf,"%d", &tc);
	for(int t=1; t <= tc;t++){
		int target;
		int flag = 0 ;
		fscanf(mf,"%d\n", &target);
			for(int i = 0 ; i< number ; i++){
				if(arr[i].ID==target){
					printf("Case #%d: %s\n", t, arr[i].Name);
					flag = 1;
				}	
			}
		if(flag==0) printf("Case #%d: N/A\n", t);
	}
	fclose(mf);
	return 0;
}
