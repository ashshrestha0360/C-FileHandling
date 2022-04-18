#include <stdio.h>
void main()
{
    FILE *f;
    f = fopen("menu_file.txt", "a");
    if (f == NULL)
        printf("File not found!");
    else
    {
        char ans;
        do
        {
            char name[100], address[100];
            int salary, n;
            printf("Enter the number of employee:\n");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                printf("Enter the name, address and salary\n");
                scanf("%s %s %d", name, address, &salary);
                fprintf(f, "\n%s \t%s \t%d", name, address, salary);
            }
            printf("Do you want to add more?(Y/N)");
            scanf("\n%c", &ans);
        } while (ans == 'y' || ans == 'Y');
    }
    fclose(f);
}
