#include<stdio.h>
int main()
{	
	long int num,i,reminder,reverse=0;
	printf("\n enter number  : ");
	scanf("%ld",&num);
	while(num>0)
	{
	reminder=num%10;
	reverse=reverse*10+reminder;
	num/=10;
	}
	printf("\n reverse num is  %ld ",reverse);
	 for(i=1;i<=10;i++)
	{
		printf("\n %ld ",10*i);
	}
	printf("\n");
///////////////////////////////
	i=1;
	while(i<=10)
	{
		printf("\n %ld ",10*i);
		i++;
	}
	return 0;

}

