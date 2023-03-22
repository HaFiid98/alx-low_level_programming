#include"main.h"
/** checks for lowercase if it is return 1 otherwise return 0
 * main - check for code
 * checks for lowercase if it is return 1 otherwise return 0
 * return 0 or 1
 */

int _islower(int c)
{
	if ( c => 97 || c <= 122 )
		return(1);
	else
		return(0);
}

