void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

#include <stdio.h>
int main()
{
    int a = 3, b = 4;
    ft_swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return (0);
}