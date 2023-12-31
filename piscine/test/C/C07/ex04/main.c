#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

	/*
	printf("\"-10000000000000000000000000000000\" in radix \"01\" should be\
	-2147483648: %d\n", ft_atoi_base("-10000000000000000000000000000000", "01"));
	printf("\"   ---+--+1234ab567\" in radix \"0123456789\" should be\
	-1234: %d\n", ft_atoi_base("   ---+--+1234ab567", "0123456789"));
	printf("\"   ---+--+10011010010\" in radix \"01\" should be\
	-1234: %d\n", ft_atoi_base("   ---+--+10011010010", "01"));
	printf("\"   ---+--+4D2ab567\" in radix \"0123456789ABCDEF\" should be\
	-1234: %d\n", ft_atoi_base("   ---+--+4D2ab567", "0123456789ABCDEF"));
	printf("\"   ---+--+nennab567\" in radix \"poneyvif\" should be\
	-1234: %d\n", ft_atoi_base("   ---+--+nennab567", "poneyvif"));
	*/

int	main(void)
{
	printf("%s\n", ft_convert_base("yvf", "poneyvif", "0123456789abcdef"));
	printf("%s\n", ft_convert_base("-yvf", "poneyvif", "0123456789abcdef"));
	return (0);
}