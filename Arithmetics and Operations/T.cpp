#include <stdio.h>

int main(){
	
	char s1[255],t1, l1, t2;
	char s2[255],l2; 
	char s3[255],l3;
	char s4[255],l4;
	char s5[255],l5;
	int h1, m1, h2, m2;
	int h3, m3, h4, m4;
	int h5, m5, h6, m6;
	int h7, m7, h8, m8;
	int h9, m9, h10, m10;
	
	scanf("%s %d%c%d%c%d%c%d", s1, &h1, &t1, &m1, &l1, &h2, &t2, &m2); getchar();
	scanf("%s %d%c%d%c%d%c%d", s2, &h3, &t1, &m3, &l2, &h4, &t2, &m4); getchar();
	scanf("%s %d%c%d%c%d%c%d", s3, &h5, &t1, &m5, &l3, &h6, &t2, &m6); getchar();
	scanf("%s %d%c%d%c%d%c%d", s4, &h7, &t1, &m7, &l4, &h8, &t2, &m8); getchar();
	scanf("%s %d%c%d%c%d%c%d", s5, &h9, &t1, &m9, &l5, &h10, &t2, &m10); getchar();
	
	printf("%s %02d%c%02d%c%02d%c%02d\n", s1, h1-1, t1, m1, l1, h2-1, t2, m2); 
	printf("%s %02d%c%02d%c%02d%c%02d\n", s2, h3-1, t1, m3, l2, h4-1, t2, m4); 
	printf("%s %02d%c%02d%c%02d%c%02d\n", s3, h5-1, t1, m5, l3, h6-1, t2, m6); 
	printf("%s %02d%c%02d%c%02d%c%02d\n", s4, h7-1, t1, m7, l4, h8-1, t2, m8); 
	printf("%s %02d%c%02d%c%02d%c%02d\n", s5, h9-1, t1, m9, l5, h10-1, t2, m10); 

	return 0;
}
