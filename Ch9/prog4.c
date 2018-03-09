// function to determine if two strings are equal

#include <stdio.h>
#include <stdbool.h>

bool equal_strings(const char s1[], const char s2[])
{
	int i = 0;
	bool are_equal = false;	
	
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	
	
	
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		are_equal = true;
	}
	else
	{
		are_equal = false;
	}
	
	return are_equal;
}

int main(void)
{
	const char stra[] = "bananas and apples";
	const char strb[] = "bananas";
	
	printf("%i\n", equal_strings(stra, strb) );
	printf("%i\n", equal_strings(stra, stra) );
	printf("%i\n", equal_strings(strb, "bananas") );
	
	return 0;
}
