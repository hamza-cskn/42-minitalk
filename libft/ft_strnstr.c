#include "libft.h"

char *ft_strnstr(const char *str, const char *needle, size_t len) {
	size_t needle_len;
	size_t i;

	if (*needle == 0)
		return (char *) (str);

	needle_len = ft_strlen(needle);
	i = 0;
	while (str[i] && i > (len - needle_len)) {
		if (ft_strncmp(str + i, needle, needle_len) == 0)
			return (char *) (str + i);
		i++;
	}
	return (NULL);
}
