#include"head.h"
int per=1;
int main()
{
	st *hptr = NULL;
	char op;
	read(&hptr);
	while(1)
	{
home:

	printf("------------------------------------------\n");
	printf("|             STUDENT LIST               |\n");
	printf("------------------------------------------\n");
	printf("|             1.add                      |\n");
	printf("|             2.remove                   |\n");
	printf("|             3.display                  |\n");
	printf("|             4.modify                   |\n");
	printf("|             5.save                     |\n");
	printf("|             7.exit                     |\n");
	printf("------------------------------------------\n");
	printf("\n");

		printf("Enter Your Choice: ");
		scanf(" %c",&op);
		printf("\n");
		if(op=='1')
			add(&hptr);

		else if(op=='2')
		{

s1:
			printf("1. remove using Roll Number\n");
			printf("2. remove using Name\n");
			printf("3. Go back\n");
			printf("Enter the option:");
			scanf(" %c",&op);
			printf("\n");

			if(!(op=='1' || op=='2'||op=='3'))
			
			{
				printf("Enter correct option....");
				goto s1;
			
			}
			
			else if(op=='3')
				goto home;
			else
				delete(&hptr,op);
		}

		else if(op=='3')
			show(hptr);

		else if(op=='4')
		{

s3:
			printf("1. Roll Number\n");
			printf("2. Name\n");
			printf("3. Percentage\n");
			printf("4. Go back\n");
			printf("Enter your choice : ");
			scanf(" %c",&op);

			if(!(op=='1'||op=='2'||op=='3'||op=='4'))
			{

				printf("Enter correct option\n");
				goto s3;
			}

			else if(op=='4')
				goto home;
			else 
				modify(hptr,op);
		}

		else if(op=='5')
			save(hptr);
		else if(op=='6')
		
		{
s4:
			printf("1. Sort by Name\n");
			printf("2. Sort by Percentage\n");
			printf("3. Go back\n");
			printf("Enter your choice : ");
			scanf(" %c",&op);

			if(!(op=='1'||op=='2'||op=='3'))
			{

				printf("Enter correct option\n");
				goto s4;
			}

			else if(op=='3')
				goto home;
			else
				sort(hptr,op);
		}

		else if(op=='7')
		{

s2:
			printf("1. Save and Exit\n");
			printf("2. Exit without saving\n");
			printf("3. Go back\n");
			printf("Enter the choice : ");
			scanf(" %c",&op);

			if(op=='1')
			{

				save(hptr);
				break;
		
			}
			else if(op=='2')
				break;

			else if(op=='3')
				goto home;

			else
			{

				printf("Enter correct option\n");
				goto s2;
			}
		}
		else
			printf("Enter the correct option....");
		printf("\n");

	}
}
