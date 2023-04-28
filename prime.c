#include <stdio.h>
#include <cs50.c>

bool prime(int n);

int main(void)
{
	int start;
	int end;

	// Get the starting number from the user
	do
	{
		start = get_int("Start: ");

	} while (start < 1);
	
	// Get the ending number from the user
	do
	{
		end = get_int("End: ");
	
	} while (end <= start);

	// Iterate through the given numbers
	for(start; start <= end; start++)
	{
		if(prime(start))
		{
			printf("%i\n", start);
		}
	}
}

bool prime(int n)
{
	int divider = 2;
	int modulus;

	do
	{
		modulus = n % divider;

		divider++;

	// Don't check the number itself && run while until modulus is 0 && check just the numbers up to the half of the given number 
	} while (divider < n && modulus >= 1 && divider < n/2);

	if(modulus != 0 || (modulus == 0 && n == 2) && n != 1)
	{
		return true;
	}
	
	return false;
}