#ifndef LIBFT_TESTER_H
# define LIBFT_TESTER_H
# include <ctype.h>
# include <stdio.h>

# define RED "\e[0;31m"
# define GREEN "\e[0;32m"
# define YELLOW "\e[0;33m"
# define NM "\e[0;37m"

void	ft_is_test(int (*func)(int), int (*ft_func)(int), int argc, int *argv);

#endif
