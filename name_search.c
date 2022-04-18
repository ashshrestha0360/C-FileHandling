#include <stdio.h>
void display(char[][100], int);
void main()
{
    int n;
    printf("Enter the number of names:\n");
    scanf("%d", &n);
    char a[n][100];
    for(int i = 0; i < n; i ++)
    {
        printf("Enter the name:\n");
        scanf("%s", a[i]);
    }
    for(int i = 0; i < n; i ++)
    {
        if(a[i][0] == 'a' || a[i][0] == 'A')
        {
            printf("%s", a[i]);
        }
    }
}

