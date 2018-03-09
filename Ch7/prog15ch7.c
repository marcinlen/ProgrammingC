// converting a positive integer to another base

#include <stdio.h>

	int g_converted_number[64];
int long g_number_to_convert;
	int g_base;
	int g_digit = 0;
	

void get_number_and_base(void)
{
	printf("Enter number to convert: ");
	scanf("%li", &g_number_to_convert);
	
	printf("Base: ");
	scanf("%i", &g_base);
	
	if (g_base < 2 || g_base > 16)
	{
		printf("Base error. Setting base to 10.\n");
		g_base = 10;
	}
}

void convert_number(void)
{
	do
	{
		g_converted_number[g_digit] = g_number_to_convert % g_base;
		g_digit++;
		g_number_to_convert /= g_base;
	}
	while (g_number_to_convert != 0);
	
}

void display_converted_number(void)
{
	const char base_digits[16] =
		{ '0', '1', '2', '3', '4', '5', '6', '7',
	       '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
	int next_digit;
	
	printf("Converted number = ");
	
	for (g_digit--; g_digit >= 0; g_digit--)
	{
		next_digit = g_converted_number[g_digit];
		printf("%c", base_digits[next_digit]);
	}
	printf("\n");
}

int main(void)
{
	void get_number_and_base(void);
	void display_converted_number(void);
	void convert_number(void);
	
	get_number_and_base();
	convert_number();
	display_converted_number();
	
	
	return 0;
}
	


	
