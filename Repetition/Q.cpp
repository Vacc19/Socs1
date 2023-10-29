#include <stdio.h> 

int main () {
	int t;
	scanf("%d", &t); getchar();
	for(int i = 1; i <= t; i++) {
		long int numOfPage, tgtPage, backFlip;
		scanf("%ld %ld", &numOfPage, &tgtPage); getchar();
		
		if (numOfPage % 2) backFlip = numOfPage;
		else backFlip = numOfPage + 1;
		


		if ((tgtPage)/2 <= (backFlip - tgtPage)/2) printf("Case #%d: %ld\n", i, (tgtPage)/2);
			else printf("Case #%d: %ld\n", i, (backFlip - tgtPage)/2);
	};
	
	return 0;
}
