sources	= ${wildcard *.c}
objects	= ${sources:.c=.o}

%.o: %.c
	gcc -Wall -Wextra -Werror -std=c99 -c $< -o $@ -I includes

libft.a: ${objects}
	ar -rc libft.a ${objects}

all: libft.a

clean:
	rm -f ${objects}

fclean: clean
	rm -f libft.a

re: clean all

