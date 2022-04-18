#include <stdio.h>
void main()
{
    FILE *f;
    f = fopen("employee.txt", "w");

    if (f == NULL)
        printf("File not found!");
    else
    {
        char name[100], gender[100], phone[10];
        int salary, n;
        printf("Enter the number of employee:\n");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            printf("Enter the name, gender, phone and salary:\n");
            scanf("%s %s %s %d", name, gender, phone, &salary);
            fprintf(f, "\n%s\t%s\t%s\t%d", name,gender, phone, salary);
        }
        fclose(f);

        f = fopen("employee.txt", "r");
        while (fscanf(f,"%s %s %s %d", name, gender, phone, &salary) != EOF)
        {
            printf("\n%s\t%s\t%s\t%d", name,gender, phone, salary);
        }
        fclose(f);
    }
}

