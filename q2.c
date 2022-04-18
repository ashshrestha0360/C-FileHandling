#include <stdio.h>
void sum(int, int);
void swap(int *, int *);
void main()
{
    int a = 5, b = 10;
    //call by value
    sum(a, b);
    //call by address
    swap(&a, &b);
}

void sum(int a, int b)
{
    int c;
    c = a + b;
    printf("The sum is %d\n", c);
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("a = %d, b = %d\n", *a, *b);
}

