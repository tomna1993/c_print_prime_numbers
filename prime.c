#include <stdio.h>
#include <cs50.c>

int main(void)
{
	int start = get_int("Start: ");
	int end = get_int("End: ");

	for(start; start <= end; start++)
	{
		int divider = 2;
		int modulus;

		do
		{
			modulus = start % divider;

			divider++;

		} while (divider < start && modulus >= 1);

		if(modulus != 0 || (modulus == 0 && start == 2))
		{
			printf("%i\n", start);
		}
	}
}