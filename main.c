#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	//1
	printf("\n");
	int std = printf(" %% ");

	printf("||");

	int ft = ft_printf(" %% ");
	printf("\nstd=%d  , ft=%d\n",std,ft);
	//2
	printf("\n");
	std = printf(" %%%% ");

	printf("||");

	ft = ft_printf(" %%%% ");
	printf("\nstd=%d  , ft=%d\n",std,ft);
	//3
	printf("\n");
	std = printf("%%");

	printf("||");

	ft = ft_printf("%%");
	printf("\nstd=%d  , ft=%d\n",std,ft);
	//4
	printf("\n");
	std = printf("%%%");

	printf("||");

	ft = ft_printf("%%%");
	printf("\nstd=%d  , ft=%d\n",std,ft);
	//5
	printf("\n");
	std = printf("%z");

	printf("||");

	ft = ft_printf("%z");
	printf("\nstd=%d  , ft=%d\n",std,ft);
	return (0);
}