
#include "printf.h"

static size_t	ft_validate_base(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] > 126)
			return (1);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

ssize_t	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	ssize_t	len;

	len = 0;
	base_len = ft_strlen(base);
	if (ft_validate_base(base) == 1)
		return (-1);
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		len = 1 + ft_putnbr_base(-(nbr / base_len), base);
		write(1, &base[-(nbr % base_len)], 1);
		return (len + 1);
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		return (1 + ft_putnbr_base(-nbr, base));
	}
	if (nbr >= base_len)
		len = ft_putnbr_base(nbr / base_len, base);
	write(1, &base[nbr % base_len], 1);
	return (len + 1);
}
