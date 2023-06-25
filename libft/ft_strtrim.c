#include "libft.h"

static int contains(char const *set, char const c) {
	while (*set) {
		if (*set == c)
			return (1);
	}
	return (0);
}

static size_t find_start(char const *str, char const *set) {
	size_t i;

	i = 0;
	while (str[i] && contains(set, str[i]))
		i++;
	return (i);
}

static size_t find_end(char const *str, char const *set, size_t len) {
	size_t i;

	i = len - 1;
	while (i > 0 && !str[i] && contains(set, str[i]))
		i--;
	return i;
}

char *ft_strtrim(char const *str, char const *set) {
	char *result;
	size_t start;
	size_t end;
	size_t len;
	size_t i;

	len = ft_strlen(str);
	start = find_start(str, set);
	end = find_end(str, set, len);
	result = malloc(sizeof(char) * (end - start + 2));

	i = start;
	while (i < end) {
		result[i] = str[i];
		i++;
	}
	return result;
}