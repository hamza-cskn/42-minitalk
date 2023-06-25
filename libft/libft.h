#ifndef LIBFT_H
#define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int ft_isalpha(int c);

int ft_isdigit(int c);

int ft_isalnum(int c);

int ft_isascii(int c);

int ft_isprint(int c);

int ft_toupper(int c);

int ft_tolower(int c);

int ft_puts(const char *s);

size_t ft_strlen(const char *s);

void *ft_memset(void *b, int c, size_t len);

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

char *ft_strdup(const char *s); //to check

char *ft_strdup(const char *s1);

void ft_cat(int fd);

char *ft_strchr(const char *s, int c);

char *ft_strrchr(const char *s, int c);

int ft_strncmp(const char *s1, const char *s2, size_t n);

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);

char *ft_strjoin(char const *s1, char const *s2);

char *ft_strtrim(char const *str, char const *set);

char **ft_split(char const *s, char c);

void ft_putchar(char c);

void ft_putstr(char *str);

void ft_putnbr(int nb);

void ft_putendl(char *str);

void ft_putnbr_base(int nb, char *base);

void ft_putchar_fd(char c, int fd);

void ft_putstr_fd(char *s, int fd);

void ft_putnbr_fd(int n, int fd);

int ft_atoi(const char *str);

char *ft_itoa(int nb);

int ft_is_base(char c, char *base);

int ft_strcmp(const char *s1, const char *s2);

int ft_strncmp(const char *s1, const char *s2, size_t n);

void ft_bzero(void *s, size_t n);

#endif