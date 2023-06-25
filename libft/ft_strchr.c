#include "libft.h"

char *ft_strchr(const char *str, int c) {
	int i = 0;
	while (str[i]) {
		if (str[i] == c)
			return (char *) (str + i);
		i++;
	}
	if (c)
		return NULL;
	return (char *) (str + i);
}
