#include <stdio.h>
void main()
{
    FILE *f;
    f = fopen("employee.txt", "r");

    if (f == NULL)
        printf("File not found!");
    else
    {
        char name[100], post[100];
        int salary, n;
        printf("Name\tPost\tSalary");
        while (fscanf(f, "\n%s\t %s\t %d ", name, post, &salary) != EOF)
        {
            if (salary > 10000 && salary < 50000)
            {
                printf("\n%s \t%s \t%d", name, post, salary);
            }
        }
        fclose(f);
    }
}
