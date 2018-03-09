// counting words

#include <stdio.h>
#include <stdbool.h>

bool alphabetic(const char c)
{
	if ( (c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z') )
	{
		return true;
	}
	else 
	{
		return false;
	}
}

int count_words(const char string[])
{
	int i, word_count = 0;
	bool looking_for_word = true;
	
	for (i = 0; string[i] != '\0'; i++)
	{
		if ( alphabetic(string[i]) ) 
		{
			if (looking_for_word)
			{
				word_count++;
				looking_for_word = false;
			}
		}
		else
		{
			looking_for_word = true;
		}
	}
	
	return word_count;
}

int main(void)
{
	const char text1[] = "Remember anything you want ";
	const char text2[] = "with \"The Memory Book\".";
	
	printf("%s - words = %i\n", text1, count_words(text1));
	printf("%s - words = %i\n", text2, count_words(text2));
	
	return 0;
}
