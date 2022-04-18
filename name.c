#include <stdio.h>
void main()
{
    FILE *f;
    f = fopen("name.txt", "a");
    if (f == NULL)
        printf("File not found!");
    else
        fprintf(f, "My name is Ashish Shrestha.");
    fclose(f);
}