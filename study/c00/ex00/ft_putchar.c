#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	char c = "abcd";
	ft_putchar(c);
	return (0);
}







// #include <unistd.h>

// void	ft_putchar(char c);
// {
// 	write(1, &c, 1);
// }

// int main()
// {
// 	char c = "abc";
// 	ft_putchar(c);
// 	return 0;
// }