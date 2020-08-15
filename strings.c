#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char *string;

int main()
{
	string name = "raman";
	string capital = malloc(strlen(name) + 1);     // malloc function allocates the memory for the pointer and adding 1 for terminating value.
    int n = strlen(name);
	for (int i = 0; i < n + 1; i++)     // loop will continue to the last null terminating value.
	{
		capital[i] = name[i];
	}
	capital[0] = capital[0] + 12;

	printf("%s\n", name);
	printf("%s\n", capital);
	free(capital);
	return 0;
}