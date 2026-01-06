#include <unistd.h>

void ft_print_comb(void)
{
    char first;
    char second;
    char third;

    first = '0';
    second = '1';
    third =  '2';

    while (first <= '9')
    {
        second = first + 1;
        while (second <= '9')
        {
            third = second + 1;
            while (third <= '9')
            {
                write(1, &first, 1);
                write(1, &second, 1);
                write(1, &third, 1);
                if (!(first == '7' && second == '8' && third == '9'))
                    write(1, ", ", 2);
                third++;
            }
            second++;
        }
        first++;
    }
}

int main()
{
    ft_print_comb();
    return (0);
}