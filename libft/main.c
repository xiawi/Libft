#include "libft_tester.h"
#include "./../libft.h"

int	main(void)
{
	int	is_tests[4] = {'A', '0', 999, 2};
	printf("Testing ft_isalpha...\n");
	ft_is_test(isalpha, ft_isalpha, 4, is_tests);
	printf("\n");
	getchar();

	printf("Testing ft_isdigit...\n");
	ft_is_test(isdigit, ft_isdigit, 4, is_tests);
	printf("\n");
	getchar();

	printf("Testing ft_isalnum...\n");
	ft_is_test(isalnum, ft_isalnum, 4, is_tests);
	printf("\n");
	getchar();

	printf("Testing ft_isascii...\n");
	ft_is_test(isascii, ft_isascii, 4, is_tests);
	printf("\n");
	getchar();

	printf("Testing ft_isprint...\n");
	ft_is_test(isprint, ft_isprint, 4, is_tests);
	printf("\n");
	getchar();
}
