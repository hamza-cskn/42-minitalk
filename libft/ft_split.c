#include "libft.h"

static int word_length(char const *str, char c) {
	int i;

	i = 0;
	while (str[i] != c)
		i++;
	return i;
}

static char *ft_duplicate(char const *str, int size) {
	int i;
	char *res;

	res = malloc(sizeof(char *) * size);
	if (!res)
		return 0;

	i = 0;
	while (i < size - 1) {
		res[i] = str[i];
		i++;
	}
	res[i] = 0;
	return res;
}

static int count_words(char const *str, char c) {
	int i;
	int count;

	count = 0;
	while (*str) {
		i = 0;
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != c)
			i++;
		str += i;
	}
	return count;
}

char **ft_split(char const *str, char c) {
	char **result;
	int size;
	int word_amount;
	int word_index;
	int i;

	word_index = 0;
	word_amount = count_words(str, c);
	result = malloc(sizeof(char *) * (word_amount + 1));
	while (*str) {
		i = 0;
		while (str[i] && str[i] == c)
			i++;
		if (str[i]) {
			size = word_length(str + i, c) + 1;
			result[word_index] = ft_duplicate(str + i, size);
			word_index++;
		}
		while (str[i] && str[i] != c)
			i++;
		str += i;
	}
	result[word_index] = NULL;
	return (result);
}