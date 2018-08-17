#include<stdio.h>
#include<string.h>
void reverse (char ch[]);

int main()
{
	char  ch[50];
	printf("\n ENTER A STRING : ");
	gets(ch);
	printf("%s ",ch);
	int len=0,i=0,j,rev[50];
	/**
	while(ch[i]!='\0')
	{
		len++;
	}
	len=len+1;
	**/
	len=strlen(ch);
	printf("\n");
	while(ch[i]!='\0')
	i++;
	while(i>0)
	{
		rev[i]=ch[--i];
		++j;
	}
	rev[j]='\0';
	for(i=0;rev[i]!='\0';i++)
	{
		if(rev[i+1]==' ' || rev[i+1]==NULL)
		{
			for(j=i;j>0 && rev[j]!=' ' ; j--)
			printf("i %c ",rev[j]);
			printf( "  ");
		}
	}
	printf("the revere string is  %s ",rev);
}

