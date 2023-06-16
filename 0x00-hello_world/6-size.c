#include <stdio.h>
/**
 * main - A program that prints various size of types of computer function
 * Return: 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
lon long int d;
float f;
printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
Return (0);
}
