#include "head.h"

void load(void) {
    FILE *fs = fopen("student.dat", "r");

    int roll;
    char name[20];
    int phonenumber;
    char location[21];
    float mark;


    if (fs==NULL)
        return;


    fscanf(fs, "%*[^\n]\n");

    while (fscanf(fs, "%d,%49[^,],%d,%49[^,],%f\n", &roll, name,&phonenumber,location, &mark) == 5)
    {
        st *newnode = (st *)malloc(sizeof(st));

        newnode->roll = roll;
        strcpy(newnode->name, name);
        newnode->phonenumber = phonenumber;
        strcpy(newnode->location,location);
        newnode->mark = mark;

        newnode->next = head;
        head = newnode;
    }

    fclose(fs);
}
