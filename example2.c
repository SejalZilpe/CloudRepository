#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("\n ENTER THE VALUE  a and b :");
	scanf("%d %d ",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("\n a= %d b= %d ", a,b);
	return 0;
}

