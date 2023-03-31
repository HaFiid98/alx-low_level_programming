#include"main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 *
 * @s : the string
 *
 * Return: s
 *
 */
char *cap_string(char *s)
{
	int i = 0;
	int b;

	while (s[i])
	{
		if ((s[i] >= 96) && (s[i] <= 122))
		{
			b = i - 1;
			if ((s[b] == ' ') || (s[b] == '.') || (s[b] == '	') ||
					(s[b] == ';') || (s[b] == ',') || (s[b] == '!') ||
					(s[b] == '?') || (s[b] == '(') || (s[b] == ')') ||
					(s[b] == '}') || (s[b] == '{') || (s[b] == '"') || (s[b] == '\n'))
			{
				s[i] = s[i] - 32;
			}
		}
		i++;
	}
	return (s);
}
