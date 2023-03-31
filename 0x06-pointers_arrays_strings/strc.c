#include"main.h"
/** _strncpy - function that copies a string.
 *
 * @dest : copy from
 * @src : copy to
 *
 * n : number of strings
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0';i++)
	{
		dest[i] = src[i];
	}
	
	while ( i < n)
	{
		i++;
		dest[i] = '\0';
	}
	return (dest);
}
