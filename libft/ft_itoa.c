#include "libft.h"

static int digits(unsigned int n) {
	int i;

	if (n == 0)
		return 1;

	i = 0;
	while (n != 0) {
		n /= 10;
		i++;
	}
	return i;
}

static void natural_itoa(int nb, char *str) {
	if (nb >= 10)
		natural_itoa(nb / 10, str - 1);
	*str = (char) ((nb % 10) + '0');
}

char *ft_itoa(int nb) {
	char *result;
	int len;
	int is_negative;
	int digit_count;

	if (nb < 0) {
		if (nb == -2147483648) {
			result = (char *) malloc(sizeof(char) * 12);
			ft_strlcpy(result, "-2147483648", 12);
			return result;
		}
		nb = -nb;
		is_negative = 1;
	} else {
		is_negative = 0;
	}

	digit_count = digits(nb);
	len = digit_count + is_negative;
	result = (char *) malloc(sizeof(char) * (len + 1));

	if (!result)
		return (NULL);

	if (is_negative)
		*result = '-';

	natural_itoa(nb, result + len - 1);
	result[len] = '\0';
	return result;
}
