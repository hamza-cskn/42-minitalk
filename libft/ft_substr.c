#include "libft.h"

char *ft_substr(char const *str, unsigned int start, size_t len) {
	char *res;
	size_t i;

	len = ft_strlen(str);
	res = malloc(sizeof(char *) * len);
	if (!res)
		return NULL;

	i = start;
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}

	res[i] = 0;
	return res;
}