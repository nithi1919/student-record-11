#include"head.h"

void read(st **ptr)
{
	FILE *fp = fopen("student.dat","r");
	if(fp==NULL)
		return;
	int max = 100;
	while(1)
	{
		st *new = (st*)malloc(sizeof(st));
		if((fscanf(fp,"%d %s %f",&new->roll,new->name,&new->mark))!=3)
		{
			free(new);
			break;
		}
		if(new->roll > max)
			max = new->roll;
		new->next = NULL;
		if((*ptr)==NULL)
			(*ptr)=new;
		else
		{
			st *last = (*ptr);
			while(last->next!=NULL)
				last = last->next;
			last->next = new;
		}
	}
	per = max + 1;
	fclose(fp);	
}

