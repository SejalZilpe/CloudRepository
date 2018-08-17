#include<stdio.h>
#include<stdlib.h>
nclude<string.h>
typedef struct utl
{
	char name[50];
	int regno;
	char place[50];
	struct utl *next,*newnode;
}node;
int main()
{
	create();
	display();
	return 0;
}
void create()
{
	struct node * start=NULL;
	char ename[50],eplace[50];
	int eregno,i;
	start= (struct node*)malloc(sizeof(struct node));
	if(start==NULL)
	{
		return 0;
	}
		printf("\n enter the entry : ");
		gets(ename);
		scanf("%d",eregno);
		gets(eplace);
		strcpy(start->name,ename);
		start->regno=eregno;
		strcpy(start->place,eplace);
		for(i=2; i<=4; i++)
    		{
        	newnode = (struct node *)malloc(sizeof(struct node));
		if(newnode == NULL)
        	{
         		printf("Unable to allocate memory.");
          		break;
        	}
		strcpy(newnode->name,ename);
		newnode->regno=eregno;
		strcpy(newnode->place,eplace);
		newnode->next=NULL;
		temp=newnode;
		temp->next=newnode;
		temp=temp->next;
	}
}
void display()
{
    struct node *temp;
    if(newnode == NULL)
    {
        printf("List is empty.");
        return;
    }
    
    temp = newnode;
    while(temp != NULL)
    {
        printf("Data =  %d  ",temp->regno); // Print data of current node
        temp = temp->next;                 // Move to next node
    }
}
