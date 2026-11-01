#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
	int roll;
	char name[30];
	float mark;
	struct student *next;
}st;
void read(st **);
void add(st **);
void delete(st **,char);
void show(st *);
void modify(st *,char);
void save(st *);
void sort(st *,char);
extern int per;
extern int count;
extern st* curr;

