// read line of text from terminal

#include <stdio.h>

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
	
	i -= 1;
	
	buffer[i] = '\0';
}

int main(void)
{
	int i;
	char line[81];
	
	for (i = 0; i < 3; i++)
	{
		read_line(line);
		printf("%s\n\n", line);
	}
	
	return 0;
}
