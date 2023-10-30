#include <stdio.h>
long n; int turn;

void game() {
	if (n == 1) {
		if (turn == 0) puts("Lili");
		else puts("Jojo");
	}
	else {
		if (turn == 0) turn = 1;
		else turn = 0;
		
		if (n % 2 == 0) n /= 2;
		else n = n * 3 + 1;


		game();
	}

	
}

int main() {
    int t; scanf("%d", &t); getchar();
	for (int i = 1; i <= t; i++) {

		scanf("%ld", &n); getchar();

		printf("Case #%d: ", i);
		turn = 0; game();
		
	}return 0;
}
