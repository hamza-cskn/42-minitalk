#include "libft.h"

int ft_memcmp(const char *s1, const char *s2, size_t n) {
	unsigned char *str1;
	unsigned char *str2;
	unsigned int i;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;


	if (n == 0)
		return 0;

	i = 0;
	while (str1[i] == str2[i] && i < n - 1) {
		++i;
	}
	return str1[i] - str2[i];
}
//to check