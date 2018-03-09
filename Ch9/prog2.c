/* Function counting number of characterd
   in a string. */
   
#include <stdio.h>

int string_length(const char string[])
{
	int count = 0;
	
	while (string[count] != '\0')
	{
		count++;
	}
	
	return count;
}

int main(void)
{
	const char word1[] = { 'a', 's', 't', 'e', 'r', '\0' };
	const char word2[] = { 'a', 't', '\0' };
	const char word3[] = "\033\"Hello\"\n";
	
	printf("%i\t%i\t%i\n", string_length(word1), string_length(word2),
			string_length(word3));
			
	return 0;
}
