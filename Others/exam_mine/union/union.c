#include <unistd.h>

int main(int ac, char **av)
{
	char arr[255];
	int i;

	if (ac == 3)
	{
		i = -1;
		while (++i < 255)
			arr[i] = 0;
		i = 0;
		while (av[1][i])
		{
			if (arr[av[1][i]] == 0)
			{
				write(1, &av[1][i], 1);
				arr[av[1][i]] = 1;
			}
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			if (arr[av[2][i]] == 0)
			{
				write(1, &av[2][i], 1);
				arr[av[2][i]] = 1;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}