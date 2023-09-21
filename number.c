#include "monty.h"

int number(char *str)
{
	int a = 0;

	while (str[a])
	{
		if (a == 0 && str[a] == '-' && str[a + 1])
		{
			a++;
			continue;
		}
		if (str[a] < '0' || str[a] > '9')
			return (0);
		a++;
	}

	return (1);
}
