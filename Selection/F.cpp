#include <stdio.h>
int main(){
	int daging, sayur, telur;

	
	
	scanf("%d %d %d", &daging, &sayur, &telur);
	
	
	if(daging>telur && daging>sayur){
		if(telur>sayur){
			printf("Daging\nTelur\nSayur\n");		
			}
		else 
			printf("Daging\nSayur\nTelur\n");
		}
	else if(telur>sayur && telur>daging){
		if(sayur>daging){
			printf("Telur\nSayur\nDaging\n");		
			}
		else 
			printf("Telur\nDaging\nSayur\n");
		}	
	else if(sayur>telur && sayur>daging){
		if(telur>daging){
			printf("Sayur\nTelur\nDaging\n");		
			}
		else 
			printf("Sayur\nDaging\nTelur\n");
		}
	

	

	
	

	



	return 0;
}
