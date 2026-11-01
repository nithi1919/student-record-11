#include "head.h"
void modify(st* ptr,char op)
{
    char ch;
    if(ptr==NULL)
    {
        printf("No students record...");
        return;
    }
    else if(op=='r' || op=='R')
    {
        printf("Enter roll number to modify : ");
        int num;
        scanf("%d",&num);
        while(ptr!=NULL)
        {
            if(num==ptr->roll)
            {
help:
                printf("1. Name\n");
                printf("2.Percentage\n\n");
		printf("3.Go Back\n");
                printf("Enter Your Choice : ");
                scanf(" %c",&ch);
                if(ch=='1')
                {
                    printf("Enter the name to modify : ");
                    char s[30];
                    scanf("%s",s);
                    strcpy(ptr->name,s);
                }
                else if(ch=='2')
                {
                    printf("Enter the percentage to modify : ");
                    float m;
                    scanf("%f",&m);
                    ptr->mark = m;
                }
		else if(ch=='3')
			return;
                else
                {
                    printf("Enter correct choice...\n");
                    goto help;
                }
            }
            ptr = ptr->next;
        }
        printf("Roll number not found in the student record....\n");
    }
    else if(op=='N' || op=='n')
    {
        printf("Enter which name to modify : ");
        char s1[30];
        int count=0;
        scanf("%s",s1);
        st* temp = ptr;
        while(temp!=NULL)
        {
            if(strcmp(s1,temp->name)==0)
                count++;
            temp = temp->next;
        }
        if(count==0)
        {
            printf("Name not found in students record...\n");
            return;
        }
        else if(count==1)
        {
            temp=ptr;
            while(temp!=NULL)
            {
                if(strcmp(s1,temp->name)==0)
                {
                    printf("Enter the name : ");
                    char s2[30];
                    scanf("%s",s2);
                    strcpy(temp->name,s2);
                }
                temp = temp->next;
            }
        }
        else
        {
            temp=ptr;
            printf("\nMatching records...\n");
            printf("|------------------------------------------------|\n");
            printf("%-15s %-20s %-15s\n","Roll Number","Name","Percentage");
            printf("|------------------------------------------------|\n");

            while(temp!=NULL)
            {
                if(strcmp(s1,temp->name)==0)
                {
                    printf("%-15d %-20s %-15.3f\n",
                           temp->roll,temp->name,temp->mark);
                }
                temp=temp->next;
            }

            printf("|------------------------------------------------|\n");
            printf("Multiple matching name so enter roll number below\n");
            modify(ptr,'r');
        }

    }
    else if(op=='P' || op=='p')
    {
        printf("Enter which percentage to modify : ");
        float f;
        int count=0;
        scanf("%f",&f);
        st* temp = ptr;
        while(temp!=NULL)
        {
            if(f==temp->mark)
                count++;
            temp = temp->next;
        }
        if(count==0)
        {
            printf("Percentage not found in students record...\n");
            return;
        }
        else if(count==1)
        {
            temp = ptr;
            while(temp!=NULL)
            {
                if(f == temp->mark)
                {
                    printf("Enter the percentage : ");
                    float f;
                    scanf("%f",&f);
                    temp->mark = f;
                }
                temp = temp->next;
            }
        }
        else
        {
            temp=ptr;
            printf("\nMatching records...\n");
            printf("|------------------------------------------------|\n");
            printf("%-15s %-20s %-15s\n","Roll Number","Name","Percentage");
            printf("|------------------------------------------------|\n");

            while(temp!=NULL)
            {
                if(f == temp->mark)
                {
                    printf("%-15d %-20s %-15.3f\n",
                           temp->roll,temp->name,temp->mark);
                }
                temp=temp->next;
            }

            printf("|------------------------------------------------|\n");
            printf("Multiple matching name so enter roll number below\n");
            modify(ptr,'r');
        }
    }
}

