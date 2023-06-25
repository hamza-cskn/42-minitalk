#include "libft.h"

//tocheck
char *ft_strdup(const char *str) {
	int i;
	char *res;
	size_t len;

	len = ft_strlen(str);
	res = malloc(sizeof(char *) * len);
	if (!res)
		return NULL;

	i = 0;
	while (str[i]) {
		res[i] = str[i];
		i++;
	}

	res[i] = 0;
	return res;
}