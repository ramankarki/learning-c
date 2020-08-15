#include <stdio.h>

void draw(int height);

int main()
{
	int height;
	printf("Height:  ");
	scanf("%i", &height);
	draw(height);
}

void draw(int height)
{
	if (height == 0)
	{
		return;
	}
	draw(height-1);
	for (int i = 0; i < height; i++)
	{
		printf("#");
	}
	printf("\n");
}
