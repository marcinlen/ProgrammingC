/*
 * length of array of characters
 * incorrect for loop array length check
 */
 
 #include <stdio.h>
 
 int main()
 {
 	char string[] = { 'H', 'e', 'l', 'l', 'o', '!', '\0' };
 	/* dont have to pass argument for array length
 		when array is declared and initialized at the same time */
 		 	
 	for (int i = 0; i < 10; i++)
 	{
 		printf("%c\n", string[i]);
 	}
 	
 }
 	
