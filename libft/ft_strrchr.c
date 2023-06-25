#include "libft.h"

char *strrchr(const char *str, int c) {
	size_t i;

	i = ft_strlen(str);
	while (str[i]) {
		if (str[i] == c)
			return (char *) (str + i);
		i--;
	}
	if (c)
		return NULL;
	return (char *) (str + i);
}

