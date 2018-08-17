#include<stdio.h>
int main()
{
	int a,b;
	printf(" \n enter a and b : ");
	scanf(" %d %d ", &a,&b);
	printf(" \n before a= %d b=%d ",a,b);
	/** a=a^b;
	b=a^b;
	a=a^b; **/
	a^=b^=a^=b;
	printf("\nafter  a= %d b= %d \n",a,b);
	return 0;
}

