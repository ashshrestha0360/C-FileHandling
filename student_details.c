#include <stdio.h>
void main()
{
    FILE *f;
    f = fopen("student_details.txt", "w");
    if(f == NULL)
        printf("File not found!");
    else
    {
        int i, n;
        printf("Enter the number of students:\n");
        scanf("%d", &n);
        int roll;
        char name[100];
        for(i = 0; i < n; i ++)
        {
            printf("Enter the roll and name:\n");
            scanf("%d %s", &roll, name);
        }
        fprintf(f,"%d %s", roll, name);
    }
    fclose(f);
}