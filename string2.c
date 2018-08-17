#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void **rrr;
int main()
{
	rrr=malloc(sizeof(void**)); // we dont know the actual address
//	*rrr=strdup("ddd");
//	rrr=NULL;
//	free(rrr);
	rrr=((char*)*rrr)+1;
	return 0;

}
