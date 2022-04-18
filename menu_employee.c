#include <stdio.h>
#include <string.h>
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

        while (fscanf(f, "\n%s\t %s\t %d ", name, post, &salary) != EOF)
        {
            char x[20];
            int flag = 0;
            printf("Enter the name to search:\n");
            scanf("%s", &x);
            for (int i = 0; i < strlen(name); i++)
            {
                if (strcmp(x, name) == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {

                printf("\n%s \t%s \t%d", name, post, salary);
            }
            else
            {
                printf("Search not found!");
            }
        }
        fclose(f);
    }
}
