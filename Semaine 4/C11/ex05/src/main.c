#include "../includes/ft_ft.h"

void	ft_put_inside(t_op tab[])
{
	tab[0] = &ft_op_add;
	tab[1] = &ft_op_sub;
	tab[2] = &ft_op_mul;
	tab[3] = &ft_op_div;
	tab[4] = &ft_op_mod;
}

int	main(int argc, char **argv)
{
	int		i;
	char	*op;
	t_op	tab[5];

	op = "+-*/%\0";
	ft_put_inside(tab);
	if (argc != 4)
		return (0);
	i = -1;
	if (argv[2][0] == '/' && !ft_atoi(argv[3]))
		return (ft_div_error());
	if (argv[2][0] == '%' && !ft_atoi(argv[3]))
		return (ft_mod_error());
	while (op[++i])
	{
		if (op[i] == argv[2][0])
		{
			ft_putnbr(tab[i](ft_atoi(argv[1]), ft_atoi(argv[3])));
			ft_putchar('\n');
			return (0);
		}
	}
	ft_putstr("0\n");
	return (0);
}
