/*
 * counting word in lines of text entered
 * by the user. to finish entry of text 
 * press enter twice.
 */
 
#include <stdio.h>
#include <stdbool.h>

bool alphabetic(const char c)
{
	if ( c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return true;
	}
	else
	{
		return false;
	}
}

void read_line(char buffer[])
{
	char character;
	int i = 0;
	
	do
	{
		character = getchar();
		buffer[i] = character;
		i++;
	}
	while (character != '\n');
	
	buffer[i - 1] = '\0';
}

int count_words(const char string[])
{
	int i;
	int word_count = 0;
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
	char text[81];
	int  total_words = 0;
	bool end_of_text = false;
	
	printf("Type line of text, to exit press enter twice.\n\n:");
	
	while ( !end_of_text )
	{
		read_line(text);
		
		if (text[0] == '\0')
		{
			end_of_text = true;
		}
		else
		{
			total_words += count_words(text);
		}
	}
	
	printf("\nThere are %i words in above text.\n", total_words);
	
	return 0;
}
	
	
