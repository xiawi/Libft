#include "libft_tester.h"

void	ft_is_test(int (*func)(int), int (*ft_func)(int), int argc, int *argv)
{
	int	index = 0;
	int	res1; 
	int res2;
	while (index < argc)
	{
		printf("%sTesting with c = %d...\n", YELLOW, argv[index]);
		res1 = !!func(argv[index]);
		res2 = ft_func(argv[index]);
		if (res1 == res2)
			printf("%s✔ Returns match!\n", GREEN);
		else
		{
			printf("%s✗ Results don't match, please explain yourself.\n", RED);
		}
		printf("%soriginal(%d): \t %d\n", NM, argv[index], res1);
		printf("ft_func(%d): \t %d\n", argv[index], res2);
		index++;
	}
}
