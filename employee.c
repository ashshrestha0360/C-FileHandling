#include <stdio.h>
void main()
{
    FILE *f;
    f = fopen("employee.txt", "w");
    if (f == NULL)
        printf("File not found!");
    else
    {
        char name[100];
        int salary, n;
        printf("Enter the number of employee:\n");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            printf("Enter the name, salary");
            scanf("%s %d", name,&salary);
            fprintf(f, "\n%s\t%d", name,salary);
        }
    }
    fclose(f);
}
