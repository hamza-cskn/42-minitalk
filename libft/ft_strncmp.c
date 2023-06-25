#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n) {
	unsigned int i;

	i = 0;
	while (*s1 && *s1 == *s2 && i < n - 1) {
		++s1;
		++s2;
		++i;
	}
	return *s1 - *s2;
}