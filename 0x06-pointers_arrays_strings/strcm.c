#include"main.h"
/**
 * _strcmp -  function that compares two strings.
 *
 * @s1 : first s
 * @s2 : second s
 *
 * return : ° if equal or minus if not
 */
int _strcmp(char *s1, char *s2)
{
	int i= 0 ;
	int b;
	int l = 0;
	while (s1[l] != '\0')
	{ 
		l++;
	}
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
		{	i++;
			continue;
		}

		else 
		{
			b = s1[i] - s2[i];
			return (b);
			break;
		}

	}
	return (0);
}
