#include <stdio.h>
/**
 * main - Entry ponit
 *
 * Description: `Print alphabets lowercase`
 *
 * Return: Alawys 0
*/
int main(void) 
{

	char c;
	for (c = 'a'; c <= 'z'; c++)
{
    putchar(c);
    }
	putchar('\n');
	return 0;
}
