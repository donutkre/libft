#include "libft.h"
#include "stdio.h"
#include <sys/stat.h>
#include <fcntl.h>

int		test(void)
{
	int	nbr;
	int	fd;

	fd = open("file1.txt", O_RDWR);
	nbr = 0;
	ft_putstr_fd("nbr : 0\nfct : ", fd);
	ft_putnbr_fd(nbr, fd);
	ft_putchar_fd('\n', fd);

	nbr = 42;
	ft_putendl_fd("", fd);
	ft_putstr_fd("nbr : 42\nfct : ", fd);
	ft_putnbr_fd(nbr, fd);
	ft_putchar_fd('\n', fd);

	nbr = -42;
	ft_putendl_fd("", fd);
	ft_putstr_fd("nbr : -42\nfct : ", fd);
	ft_putnbr_fd(nbr, fd);
	ft_putchar_fd('\n', fd);

	nbr = +101;
	ft_putendl_fd("", fd);
	ft_putstr_fd("nbr : +101\nfct : ", fd);
	ft_putnbr_fd(nbr, fd);
	ft_putchar_fd('\n', fd);

	nbr = -2147483648;
	ft_putendl_fd("", fd);
	ft_putstr_fd("nbr : -2147483648\nfct : ", fd);
	ft_putnbr_fd(nbr, fd);
	ft_putchar_fd('\n', fd);

	nbr = 2147483647;
	ft_putendl_fd("", fd);
	ft_putstr_fd("nbr : 2147483647\nfct : ", fd);
	ft_putnbr_fd(nbr, fd);
	ft_putchar_fd('\n', fd);

	return (1);
}

int main(void){
    test(); 
}