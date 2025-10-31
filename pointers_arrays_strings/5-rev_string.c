#include "main.h"
#include <stdio.h>

void rev_string(char *s)
{
	int i; j; k;
	char temp;

	j = 0;
	k = 0;

        while (s[j] != '\0')
	{
		j++;
	}
	k = j -1;

	for (i = 0; i < j; i++)
	{
		tmp = s[i];
		s[i] = s[k];
		s[k--] = tmp;
	}
}
