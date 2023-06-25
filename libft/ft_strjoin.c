#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2) {
	char *string;
	char *res;

	string = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	res = string;

	while (*s1)
		*string++ = *s1++;

	while (*s2)
		*string++ = *s2++;

	*string = '\0';
	return res;
}//to check
