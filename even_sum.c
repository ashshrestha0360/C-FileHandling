#include <stdio.h>
void sum_even(int [], int);
int main()
{
    int i,n ;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the number:");
        scanf("%d", &a[i]);
    }

    sum_even(a, n);
    return 0;
}

void sum_even(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            sum = sum + a[i];

        }
    }
    printf("The sum is %d", sum);
}

