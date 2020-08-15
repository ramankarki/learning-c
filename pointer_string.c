#include <stdio.h>

int main()
{
	char *s = "EMMA";
	printf("%s\n", s);
	
	// if we want to print the address of that first character of string.
	printf("%p\n", s);
	printf("%p\n", &s[0]);

	// they all are one byte apart.
	printf("%p\n", &s[1]);
	printf("%p\n", &s[2]);
	printf("%p\n", &s[3]);

  // if we want to print the individual letter of pointer s.
	printf("%c\n", *s);
	printf("%c\n", *(s+1));
	printf("%c\n", *(s+2));
	printf("%c\n", *(s+3));
	
	return 0;
}
