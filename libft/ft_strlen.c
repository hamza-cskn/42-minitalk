#include "libft.h"

size_t ft_strlen(const char *c) { //to check const char*c or char* const c
	int i;

	i = 0;
	while (c[i] != 0) {
		i++;
	}
	return (i * sizeof(char));
}