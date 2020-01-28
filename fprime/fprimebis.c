#include <unistd.h>

int		ft_atoi(char *str)
{
	int i = 0;
	int ret = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + str[i] - 48;
		i++;
	}
	return (ret);

}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);

	}
	if (nb < 10)
		ft_putchar(nb % 10 + 48);
}

int		main(int ac, char **av)
{
	int i, nb;

	if (ac == 2)
	{
		i = 1;
		nb = ft_atoi(av[1]);
		
		if (nb == 1)
		 ft_putnbr(1);

		while(nb >= ++i)
		{
			if (nb % i == 0)
			{
				ft_putnbr(i);
				if (nb == i)
					break;
				ft_putchar('*');
				nb =  nb / i;
				i = 1;
			}
		}
	}
	ft_putchar('\n');
	return 0;
}
