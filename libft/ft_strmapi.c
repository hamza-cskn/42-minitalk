#include "libft.h"

char *ft_strmapi(char const *str, char (*func)(unsigned int, char)) {
	char *result;
	size_t len;
	int i;

	len = ft_strlen(str);
	result = (char *) malloc(sizeof(char) * (len + 1));
	if (!result)
		return NULL;
	i = 0;
	while (str[i]) {
		result[i] = func(i, str[i]);
		i++;
	}
	return result;
}