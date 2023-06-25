void ft_striteri(char *str, void (*func)(unsigned int, char *)) {
	int i;

	i = 0;
	while (str[i]) {
		func(i, str + i);
		i++;
	}
}