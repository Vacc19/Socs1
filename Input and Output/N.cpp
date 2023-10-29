#include <stdio.h>
int main(){
	char N[255], N1[255];
	double H, H1;
	int U, U1;
	
	scanf("%s %lf %d %s %lf %d", &N, &H, &U, &N1, &H1, &U1);
	printf("Name 1: %s\n", N);
	printf("Height 1: %.2lf\n", H);
	printf("Age 1: %d\n", U);
	printf("Name 2: %s\n", N1);
	printf("Height 2: %.2lf\n", H1);
	printf("Age 2: %d\n", U1);
return 0;
}
