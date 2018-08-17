#include<stdio.h>
int fact (int);
float add(int, int);
float sub(int, int);
float mul(int,int);
float div(int, int);
float halfadder(int ,int);
int main()
{	
	int a, b,g;
	float c,d,e,f;
	printf("\n ENTER A AND B :");
	scanf(" %d %d ",&a,&b);
	c=add(a,b);
	printf( "\n addition = %f ",c);
	d=sub(a,b);
	printf("\n subtraction = %f ",d);
	e=mul(a,b);
	printf("\n multiplication= %f ",e);
	f=div(a,b);
	printf("\n division= %f ",f);
	g=fact(b);
	printf("\n fact of %d is%d \n",b,g);
	c=halfadder(a,b);
	printf("\n adder is %f ",c);
	return 0;
}
float add(int a,int b)
{
	 return a+b;
}
float sub(int a,int b)
{	
	return a-b;
}
float mul(int a,int b)
{
	return a*b;
}
float div(int a ,int b)
{
	if(b==0)
	{
		printf(" invalid ");
		return 0;
	}
	else
	{
		return a/b;
	}
} 
int fact (int a )
{
 	if (a==1)
	return 1;
	else
	{
		return a*fact(a-1);
	}
}
 float halfadder(int a,int b)
{
	if(!a)
	return b;
	else
	printf("\n %d ",(a&b));
	printf("\n %d ",((a&b)<<1));
	printf("\n %d ",(a^b));
	return halfadder(((a&b)<<1),(a^b));
}

