#include"head.h"

void add(st** ptr)
{

	st* new = (st*)malloc(sizeof(st));
	new->next=NULL;
	new->roll=per++;
	printf("Enter the name : ");
	scanf("%s",new->name);
	printf("Enter the Percentage : ");
	scanf("%f",&new->mark);
	if((*ptr)==NULL)
		(*ptr) = new;
	else
	{
		st *temp = (*ptr);
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=new;
	}
}

