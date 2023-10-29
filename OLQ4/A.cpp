#include <stdio.h>
int main(){
	int Day, Case;
	int Views, Z, a;
	int arr[101];
	int A, B;
	Views = 0;
	
	scanf("%d", &Day);
	
	for(int i = 0; i<Day; i++)
	{
		scanf("%d", &arr[i]); getchar();
	}	
	
	scanf("%d", &Case); getchar();

	for(int x = 1; x<=Case; x++)
	{
		scanf("%d %d",&A,&B);        
		Z = B-A;
			for(int y = A; y <= (Z+A); y++){
				
				a = y - 1;
				Views = arr[a] + Views;
			}
		a = 0;
		
		printf("Case #%d: %d\n", x, Views);
		
		Views = 0;

	}

	return 0;
}




