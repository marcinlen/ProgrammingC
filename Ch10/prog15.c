// get length of string with pointers

#include <stdio.h>

int stringLength(const char *s)
{
	const char *cptr = s;
	
	while (*cptr)	// not null character
	{
		cptr++;
	}
	
	return cptr - s;
}

int main(void)
{
	typedef char* string;
	
	string text1 = "I like bananas.";
	string text2 = "Apples.";
	string text3 = "";
	
	printf("text1 length = %i\n", stringLength(text1));
	printf("text2 length = %i\n", stringLength(text2));
	printf("text3 length = %i\n", stringLength(text3));
	
	return 0;
}
	
		
