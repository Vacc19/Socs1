#include <stdio.h>
int main(){
	char n[255];
	scanf("%[^\n]", &n);
	printf("#include <stdio.h>\n");
	printf("int main()\n");
	printf("{\n");
	printf("    printf(\"%%s\\n\",\"%s\");\n", n);
	printf("    return 0;\n");
	printf("}\n");
return 0;
}

