#include <stdio.h>
void main()
{
    FILE *f, *t;
    f = fopen("stu.txt", "r");
    t = fopen("temp.txt", "w");
    if (f == NULL || t == NULL)
        printf("File not found!");
    else
    {
        char name[100];
        int roll, x;
        printf("Enter the roll.no. whose data to be deleted\n");
        scanf("%d", &x);
        while (fscanf("%d %s", &roll, name) != EOF)
        {
            if (x != roll)
                fprintf(t, "\n%d %s", roll, name);
        }
    }
    fclose(f);
    fclose(t);
    remove("stu.txt");
    rename("temp.txt", "stu.txt");
}
