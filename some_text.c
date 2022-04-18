#include <stdio.h>
void main()
{
    FILE *fptr;
    fptr = fopen("s_text.txt", "w");
    if (fptr == NULL)
        printf("File not found!");
    else
        fprintf(fptr,"Hello! Here is some text.");
    fclose(fptr);
}