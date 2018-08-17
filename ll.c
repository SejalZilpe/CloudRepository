#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct node 
{
i    	int reg;
	char name[50];         
    	struct node *next;  
}*head;
void createList(int ,char*);
void insertNodeAtBeginning(int,char*);
int displayList();
void printmiddle(int);
int main()
{
    	int ch, reg,i,middle;
	char name[50];
	do{
		printf("\n 1. enter in linklist : ");
		printf("\n 2. enter before linklist : ");
		printf("\n 3. display linklist : ");
		printf("\n 4. display middle node : ");
		scanf("%d",&ch);
		switch(ch)
		{
   		case 1:	printf("Enter the data of nodes: ");
    			scanf("%d", &reg);
			scanf("%s",name);
    			createList(reg,name);
			break;    
		case 3:	printf("\nData in the list \n");
    			middle=displayList();
			break;
    		case 2:	printf("\nEnter data to insert at beginning of the list: ");
    			scanf("%d", &reg);
			scanf("%s",name);
    			insertNodeAtBeginning(reg,name);
			break;
		case 4: printf("\nPrint the middle node: ");
			printmiddle(middle);
			break;
		}
	}while(ch<=4);
	return 0;
}
void printmiddle(int middle)
{
	int count=0;
	struct node *temp;
	if(head == NULL)
    	{
        	printf("List is empty.");
    	}
    	else
    	{
        	temp = head;
        	while(temp!=NULL)
        	{
			if(middle==count)
            		{
				printf("\n Middle  = %d\t %s\n", temp->reg,temp->name); 
           			temp=temp->next;
			}
        	}
    	}
}
void createList(int reg,char *name)
{
    	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
    	newNode->reg=reg;
	strcpy(newNode->name,name);
	newNode->next=NULL;
	if(head == NULL)
    	{
        	head=newNode;
    	}
    	else
	{
  		newNode->next=head;
        	head=newNode;
        printf("\n LINKED LIST CREATED SUCCESSFULLY\n");
    }
}
void insertNodeAtBeginning(int reg,char *name)
{
    	struct node *currNode;
    	currNode = (struct node*)malloc(sizeof(struct node));
    	if(currNode == NULL)
   	{
        	printf("Unable to allocate memory.");
    	}
    	else
    	{
        	currNode->reg= reg;
		strcpy(currNode->name,name);
        	currNode->next = head;
        	head = currNode;        
        	printf("DATA INSERTED SUCCESSFULLY\n");
    	}
}
int displayList()
{
    	struct node *temp;
	int count=0,middle=0;;
   	if(head == NULL)
    	{
        	printf("List is empty.");
    	}
    	else
    	{
        	temp = head;
        	while(temp != NULL)
        	{
            		printf("Data = %d\t %s \n", temp->reg,temp->name); 
            		temp = temp->next;
			count++;               
        	}
    	}
	middle=(count/2);
return middle;
}

