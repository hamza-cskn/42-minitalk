#include "libft.h"

size_t ft_strlcpy(char * restrict dest, const char * restrict src, size_t size) {
	size_t i;

	if (!size)
		return (ft_strlen(src) * sizeof(char));

	i = 0;
	while (i < size - 1 && src[i]) {
		dest[i] = src[i];
		i++;
	}

	dest[i] = 0;
	return i * sizeof(char);
}