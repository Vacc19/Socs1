#include <stdio.h>
int main(){
	int tc;
	int x, y, z;
	int temp;
	int size;
		scanf("%d", &tc);
	for(int t = 1; t<=tc; t++){
		scanf("%d %d", &x, &y);
		size=0;
		z=0;
		int power=1;
		if(x>y){
			temp=x;
		} else{
			temp=y;
		}
		while(temp>0){
			size++;
			temp/=10;
		}
		for(int i = 0; i<size ;i++){
			
			z += power*(((x%10)+(y%10))%10);
			x/=10;
			y/=10;
			power*=10;
		}
		printf("Case #%d: %d\n", t, z);
	}
	return 0;
}
