#include <iostream>

int main(int ac, char **av)
{
	int 	i;
	int		j;

	if (ac > 1)
	{
		j = 1;
		while (av[j])
		{
			i = 0;
			while (av[j][i])
			{
				std::cout << toupper(av[j][i]);
				i++;
			}
			j++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}