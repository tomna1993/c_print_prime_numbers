#include <cs50.h>
#include <stdio.h>

bool prime(int n);

int main(void)
{
	// Get the starting number from the user
	int start;
	do
	{
		start = get_int("Start: ");

	} while (start < 1);
	
	// Get the ending number from the user
	int end;
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

	// Don't check the number itself && run while until modulus is 0 && 
	// check just the numbers up to the half of the given number 
	} while (divider < n && modulus >= 1 && divider < n/2);

	if(modulus != 0 || (modulus == 0 && n == 2 && n != 1))
	{
		return true;
	}
	
	return false;
}