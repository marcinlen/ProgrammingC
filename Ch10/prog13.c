#include <stdio.h>

void CopyString(char *to, char *from)
{
    for ( ; *from != '\0'; )
    {
        *to++ = *from++;
    }
    *to = '\0';
}

int main(void)
{
    char string1[] = "A string to be copied.";
    char string2[50];
    
    CopyString(string2, string1);
    printf("%s\n", string2);
    
    CopyString(string2, "So is this.");
    printf("%s\n", string2);
    
    return 0;
}