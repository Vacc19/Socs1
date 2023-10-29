#include <stdio.h> 

int main () {
	int n, t;
	long a, b;

	scanf("%d", &t); getchar();
	
	for (int k = 1; k <= t; k++) {
		unsigned long h = -1;
		scanf("%d", &n); getchar();


		for (int i = 0; i < n; i++) {
			scanf("%ld", &a); getchar();
			if (i != 0) {
				if (b >= a)  {
					if (b - a < h) h = b - a;
				} else {
					if (a - b < h) h = a - b;
				}	
			}
			b = a;
		}
	
		printf("Case #%d: %lu\n", k, h);
	}
	return 0;
}
