#include <stdio.h>
#include <stdlib.h>

void ft_sort_string_tab(char **tab);

int main()
{
	char **tab = (char **)malloc(sizeof(char *) * 6);
	tab[0] = "3bc";
	tab[1] = "c";
	tab[2] = "aa";
	tab[3] = "f23";
	tab[4] = "21333";
	tab[5] = 0;
	ft_sort_string_tab(tab);
	for(int i = 0; tab[i]; i++)
		printf("%s\n", tab[i]);

	return 0;
}
