#include <stdio.h>
#include <stdlib.h>

/**
int main()
{
    char text[100];
    int i,j;
    puts("Enter the Text:");
    gets(text);
   for(i=0;text[i]!='\0';i++)
    {
       if(text[i+1]==' ' || text[i+1]==NULL)
       {
           for(j=i;j>=0 && text[j]!=' ';j--)
            printf("%c",text[j]);
       }
       printf(" ");
    }
    return 0;
}**/
int main()
{
    char str[100], reverse[100];
    int len, i, index, wordStart, wordEnd;

    printf("Enter any string: ");
    gets(str);

    len   = strlen(str);
    index = 0;

    // Start checking of words from the end of string
    wordStart = len - 1;
    wordEnd   = len - 1;

    while(wordStart > 0)
    {
        // If a word is found
        if(str[wordStart] == ' ')
        {
            // Add the word to the reverse string
            i = wordStart + 1;
            while(i <= wordEnd)
            {
                reverse[index] = str[i];

                i++;
                index++;
            }
            reverse[index++] = ' ';

            wordEnd = wordStart - 1;
        }

        wordStart--;
    }

    // Finally add the last word
    for(i=0; i<=wordEnd; i++)
    {
        reverse[index] = str[i];
        index++;
    }

    // Add NULL character at the end of reverse string
    reverse[index] = '\0'; 

    printf("Original string \n%s\n\n", str);
    printf("Reverse ordered words \n%s", reverse);

    return 0;
}
