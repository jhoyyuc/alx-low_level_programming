#include <stdio.h>
#include <stdio.h>

/**
 * main - print a num from 1 to 100 followed by a new line
 * 3 print fizz
 * 5 print buzz
 * 3 and 5 print fizzbuzz
 * Return: Always
 */
int main(void)
{
	int i;
	char f[] = "FIZZ";
	char b[] = "BUZZ";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
	if (i == 100)
		printf("%5 ", b);
	else if ((i % 3 == 0) && (i % 5 == 0))
		printf("%5 ", fb);
	}
	return (0);
}
