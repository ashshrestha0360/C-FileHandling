#include <stdio.h>
void display(FILE *);
void store(FILE *);
void main()
{
    FILE *f;
    f = fopen("employee.txt", "a+");
    if(f == NULL)
        printf("File not found!");
    else
    {
        int choice;
        printf("----------------------------------\n");
        printf("\t1. Store\t2. Display\n");
        printf("----------------------------------\n");
        printf("Enter the choice:\n");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            store(f);
            break;
        case 2:
            display(f);
            break;
        default:
            printf("Wrong choice!\n");
        }
    }
    fclose(f);
}

void store(FILE *f)
{
    char name[100];
    float salary;
    printf("Enter the name and salary\n");
    scanf("%s %f", name,&salary);
    fprintf(f, "\n%s %f", name, salary);

}

void display(FILE *f)
{
    char name[100];
    float salary;
    while (fscanf(f,"%s %f", name, &salary) != EOF)
        {
            printf("\n%s\t%f", name,salary);
        }
}
