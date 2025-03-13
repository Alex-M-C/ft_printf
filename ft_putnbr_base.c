
#include "ft_printf.h"

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

ssize_t	special_cases(int nbr, char *base, int base_len)
{
	ssize_t	len;

	if (nbr == -2147483648)
	{
		if (write(1, "-", 1) < 0)
			return (-1);
		len = ft_putnbr_base(-(nbr / base_len), base);
		if (len < 0)
			return (-1);
		if (write(1, &base[-(nbr % base_len)], 1) < 0)
			return (-1);
		return (len + 1);
	}
	if (nbr < 0)
	{
		if (write(1, "-", 1) < 0)
			return (-1);
		return (1 + ft_putnbr_base(-nbr, base));
	}
	return (0);
}

ssize_t	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	ssize_t	len;

	base_len = ft_strlen(base);
	if (ft_validate_base(base) == 1)
		return (-1);
	len = special_cases(nbr, base, base_len);
	if (len != 0)
		return (len);
	if (nbr >= base_len)
	{
		len = ft_putnbr_base(nbr / base_len, base);
		if (len < 0)
			return (-1);
	}
	if (write(1, &base[nbr % base_len], 1) < 0)
		return (-1);
	return (len + 1);
}
