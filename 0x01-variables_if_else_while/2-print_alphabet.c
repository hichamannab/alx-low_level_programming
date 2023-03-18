#include <stdio.h>
/**
 * main - Entry ponit
 *
 * Description: print all alphabet letters
 *
 * Return: Alawys 0
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++
	}
	putchar('\n');
	return (0);
}
