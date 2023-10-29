#include <stdio.h> 

int main () {
	int t, n;
		
	scanf("%d", &t); getchar();
	
	for (int k = 0; k < t; k++) {
		scanf("%d", &n); getchar();
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (
					i == 0 ||
					j == 0 ||
					i == n-1 ||
					j == n-1 ||
					i+j == n-1 ||
					i-j == 0
				) printf("*");
				else printf(" ");
				
				if (j == n-1) puts("");
			}
		}

	printf("\n");
	}
	
	
	return 0;
}
