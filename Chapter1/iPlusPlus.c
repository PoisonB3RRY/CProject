#include <stdio.h>

int main()
{
	iPlusPlus();
	plusPlusi();
}

void iPlusPlus()
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", i);
	}
}

void plusPlusi()
{
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n", i);
	}
}
