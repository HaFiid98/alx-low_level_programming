#include"main.h"
/**
 * rot13 - function that replace letter with its 13 after
 *
 * @s : is the sttrong
 *
 * Return: return s
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i])
	{
		while (((s[i] >= 97) && (s[i] <= 122)) || ((s[i] >= 65) && (s[i] <= 90)))
		{
			if (((s[i] >= 97) && (s[i] <= 109)) || ((s[i] >= 65) && (s[i] <= 77)))
			{
				s[i] = s[i] + 13;
				break;
			}
			else
			{
				s[i] = s[i] - 13;
				break;
			}
		}
		i++;
	}
	return (s);
}
