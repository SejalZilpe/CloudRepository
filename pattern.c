#include<stdio.h>
int main()
{	 
	int r,c,space=1,i;
/**	for(r=0;r<4;r++)
	{
		for(c=0;c<=r;c++)
		{
			printf("* ");
		}
	printf("\n");
	}
**/
	space=7-1;
	for(r=0;r<7;r++)
	{
		for(c=0;c<space;c++)
		{
			
			printf(" ");
		}
		space--;
		for(c=0;c<=2*r-1;c++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
