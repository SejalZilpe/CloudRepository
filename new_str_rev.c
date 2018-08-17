#include<stdio.h>
#include<string.h> 
void reverse(char *begin, char *end);

void reverseWords(char *s)
{
    	char *word_begin = NULL;
    	char *temp = s; 
    	 while( *temp )
    	{
        	if (( word_begin == NULL ) && (*temp != ' ') )
        	{
            		word_begin=temp;
        	}
       	 	if(word_begin && ((*(temp+1) == ' ') || (*(temp+1) == '\0')))
        	{
            		reverse(word_begin, temp);
            		word_begin = NULL;
        	}
        	temp++;
    	}
   	reverse(s, temp-1);
}
void reverse(char *begin, char *end)
{
  	char temp;
  	while (begin < end)
  	{
    		temp = *begin;
    		*begin++ = *end;
    		*end-- = temp;
  	}
}
int main()
{
 	 char s[100];
  	printf("\n enter string  : ");
  	gets(s);
  	//char *temp = s;
  	reverseWords(s);
  	printf("%s", s);
  	getchar();
  	return 0;
}
