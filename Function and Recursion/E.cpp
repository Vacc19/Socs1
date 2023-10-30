#include <stdio.h>
int arr[1001];
int funct(int a) {
    int sum=0;
	for(int i=0;i<a;i++){
		sum+=arr[i];
	}
	return sum;
}

int main() {
    int tc;
    int b;
    scanf("%d", &tc);
    for (int t = 1; t <= tc; t++) {
        scanf("%d", &b);
		for(int i=0;i<b;i++){
		scanf("%d", &arr[i]);
	}
        printf("Case #%d: %d\n", t, funct(b));
    }

    return 0;
}

