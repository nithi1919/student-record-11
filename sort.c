#include"head.h"
void sort(st* ptr,char op)
{
	if(ptr==NULL)
		printf("No student records....\n");
	else if(op=='P'||op=='p')
	{
		st *temp, *last = NULL;
    		st swap;
    		int size = sizeof(st) - 8;
    		while(last != ptr)
    		{
        		temp = ptr;
        		while(temp->next != last)
        		{
            			if(temp->mark > temp->next->mark)
            			{
                			memcpy(&swap, temp, size);
                			memcpy(temp, temp->next, size);
                			memcpy(temp->next, &swap, size);
            			}
				 temp = temp->next;
        		}
        		last = temp;
    		}
	}
	else if(op=='N'||op=='n')
	{	
		st *temp, *last = NULL;
    		st swap;
    		int size = sizeof(st) - 8;
    		while(last != ptr)
    		{
        		temp = ptr;
        		while(temp->next != last)
        		{
            			if(strcmp(temp->name,temp->next->name)>0)
            			{
                			memcpy(&swap, temp, size);
                			memcpy(temp, temp->next, size);
                			memcpy(temp->next, &swap, size);
            			}
				 temp = temp->next;
        		}
        		last = temp;
    		}
	}
	printf("Sorted successfully...\n");
}

