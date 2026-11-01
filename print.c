#include "head.h"

void print(st *ptr){

	if(ptr==NULL){
		fprintf(stderr,"No record in the list...\n");
		return;
	}


	printf("Students info:\n");
	printf("--------------------------------------------------------------\n");
	printf("| roll\t\t| name\t\t| phonenumber\t\t| location\t\t| mark\t\t|\n");

	while(ptr!=NULL){
	printf("| %d\t\t| %s\t\t| %d\t\t| %s\t\t| %f\t\t|\n",ptr->roll, ptr->name,ptr->phonenumber,ptr->location, ptr->mark);
		ptr= ptr->next;
	}

	printf("---------------------------------------------------------------\n");

}

