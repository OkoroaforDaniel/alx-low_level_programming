#include <stdio.h>
/**
* main - the program run from here
*
* Return:return zero if no erro and non zero if error
*/
int main(void)
{
int alphabet, ALPHABET;

alphabet = 'a';
ALPHABET = 'A';
while (alphabet <= 'z')
{
	putchar(alphabet);
	alphabet++;
}
while (ALPHABET <= 'Z')
{
	putchar(ALPHABET);
	ALPHABET++;
}
	putchar('\n');
return (0);
}
