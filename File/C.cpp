#include <stdio.h>
int main(){
	FILE * mf = fopen("testdata.in", "r");
	int a, b;
	fscanf(mf,"%d %d", &a , &b);
	printf("%d\n", a+b);
}
