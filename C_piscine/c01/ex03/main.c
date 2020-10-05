#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 24;
	b = 10;
	
	ft_div_mod(a, b, &div, &mod);

	printf("div = %d\n",div);
	printf("mod = %d\n",mod);
}
