#include <stdio.h>
#include <string.h>
void main()
{
    FILE *f, *t;
    f = fopen("employee.txt", "r");
    t = fopen("temp.txt", "w");
    if (f == NULL || t == NULL)
        printf("File not found!");
    else
    {
        char name[100], class[100], section[10];
        float book, id;
        float tempid;
        printf("Enter the id:\n");
        scanf("%f", &tempid);
        while (fscanf(f, "%f %s %s %s %f", &id, name, class, section, &book) != EOF)
        {
            if (tempid == id)
            {
                book = book + 1;
                fprintf(t, "%f %s %s %s %f", id, name, class, section, book);
            }
            else
            {
                fprintf(t, "%f %s %s %s %f", id, name, class, section, book);
            }
        }

        fclose(f);
        fclose(t);
        remove("employee.txt");
        rename("temp.txt", "employee.txt");
    }
}
