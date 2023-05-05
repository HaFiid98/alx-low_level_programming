#include"main.h"
/**
 * print_binary - print binary
 * @n: int
 */
void print_binary(unsigned long int n)
{
	unsigned long int b = 0;

	 if (n >= 1024)
	 {
		 n -= 1024;
		 b += 10000000000;
	 }
	 if (n >= 512)
	 {
		 n -= 512;
		 b += 1000000000;
	 }
	 if (n >= 256)
	 {
		 n -= 256;
		 b += 100000000;
	 }
	 if (n >= 128)
	 {
		 n -= 128;
		 b += 10000000;
	 }
	 if (n >= 64)
	 {
		 n -= 64;
		 b += 1000000;
	 }
	 if (n >= 32)
	 {
		 n -= 32;
		 b += 100000;
	 }
	 if (n >= 16)
	 {
		 n -= 16;
		 b += 10000;
	 }
	 if (n >= 8)
	 {
		 n -= 8;
		 b += 1000;
	 }
	 if (n >= 4)
	 {
		 n -= 4;
		 b += 100;
	 }
	 if (n >= 2)
	 {
		 n -= 2;
		 b += 10;
	 }
	 if (n >= 1)
	 {
		 n -= 1;
		 b += 1;
	 }
	 printf("%ld", b);
}
