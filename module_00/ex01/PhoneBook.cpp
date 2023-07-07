#include <iostream>


int main(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    j = 0;
    if (ac == 1)
		std::cout << "****" << std::endl;
	else
	{
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				if (av[i][j] >= 'a' && av[i][j] <= 'z')
				{
					av[i][j] -= 32;
				}
				std::cout << av[i][j];
				j++;
			}
			i++;
		}
			std::cout << std::endl;
	}
	return (0);
}