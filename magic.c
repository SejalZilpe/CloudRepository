#include<stdio.h>
#include<math.h>
int main()
{
	int square, num,num1,n,num2=0 ,i=0,count=0;
	printf("\n enter the number ");
	scanf("%d",&num);
	int len=floor(log10(abs(num)))+1;
	num1=num/pow(10,len/2);	
	num2=num-num1*pow(10,len/2);
		printf (" \n num1= %d  num2= %d \n " , num1,num2);
	n=num1+num2;
	square = n*n;
	if(square==num)
	{ 		
		printf( "\n %d is a magig number ",num);
	}
	else
	{
		printf("\n not a magic number ");
	}
	return 0;
}


