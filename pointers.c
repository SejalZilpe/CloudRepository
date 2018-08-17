#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
/**	 int num[2][3]={ { 15,18,20}, {25,26,27} };
	printf("\n 1 = *(*num) = %d ",*(*num));
	printf("\n 2 = *(*num+1) = %d ", *(*num+1));
	printf("\n 3 = *(*num+2)= %d ",*(*num+2));
	printf("\n 4 = *(*(num+1))= %d ",*(*(num+1)));
	printf("\n 5 = *(*(num+1)+1)= %d ",*(*(num+1)+1));
	printf("\n 6 = *(*(num+1)+2)= %d \n",*(*(num+1)+2));
////////////////////////////
**/
	char string1[50]={"one. "};
	char string2[50]={"two. "};
	char *ptr1,*ptr2,*temp;
	ptr1=malloc(sizeof(char*));
	ptr2=malloc(sizeof (char*));
int i=9;	
	ptr1=string1;
	ptr2=string2;
	
	temp=string1;
	ptr1=string2;
	ptr2=temp;

	printf("\n after swap ");
	printf(" \n 1 : %s ",ptr1);
	printf(" \n 2 : %s ",ptr2);

	// strcpy(char *ptr1,char *ptr2)
	//while(*ptr2++=*ptr1++)
	//printf( "\n%s\n ",ptr2);	
		return 0;
}
