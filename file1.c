#include <stdio.h>
void main()
{
    FILE *f;
    f = fopen("student.txt", "w");
    if(f == NULL)
        printf("File not found");
    else
    {
        char name[100];
        int class;
        fprintf(f,"\tName\tClass\n");
        for(int i = 0; i < 3; i++)
        {
            printf("Enter name and roll:\t");
            scanf("%s %d", name, &class);
            fprintf(f, "\t%s\t%d\n", name, class);
        }
    }
}