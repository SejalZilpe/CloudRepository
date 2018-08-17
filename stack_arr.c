#include<stdio.h>
#include<stdlib.h>
#define top 100
void push();
void pop();
void display();
int x,stack[100],i;
int use;
int main()
{
	int ch
	use=0;
	do{
		printf("\n 1. INSERT IN THE STACK :");
	  	printf("\n 2. DELETE FROM STACK : ");
		printf("\n 3. DISPLAY STACK : ");
		scanf("%d",&ch);
		switch(ch)
		{
 		case 1: pop(use);
			break;
		case 2: push();
			break;
		case 3: display();
			break;
		}
	}while(ch<=3);
	return 0;
}
void push(int use)
{
	if(use>=n-1)
	{
		printf("\n STACK OVERFLOW ");
	}
	else
	{
		printf("{\n enter the value : ");
		scanf("%d",&x);
		top=top+1;
		use=use+1;
		stack[top]=x;
	}
}
void pop(int use)
{
	if(use<=-1)
	{	
		printf("\n STACK UNDERFLOW " );
	}
	else
	{
		printf("\n the element deleted %d .",stack[top]);
		top=top-1;
		use=use-1;
	}
}
void display(int use)
{
	for(i=0;i<use;i++)
	{
		printf("\n %d\t",stack[i]);
	}
	printf("\n ");
}

