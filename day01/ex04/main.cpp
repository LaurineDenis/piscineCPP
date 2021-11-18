#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		std::ifstream	in_file(av[1]);

		if (in_file.is_open())
		{
			std::string		tmp = av[1];
			std::string		tmp2 = ".replace";
			std::ofstream	out_file(tmp + tmp2);
			std::string		to_remplace = av[2];
			std::string		to_fill = av[3];
			std::size_t		pos;
			std::size_t		new_pos = 0;
			while (getline(in_file, tmp))
			{
				pos = 0;
				tmp2 = "";
				while ((new_pos = tmp.find(to_remplace)) != std::string::npos)
				{
					if (pos == 0)
						tmp2 = tmp.substr(pos, new_pos) + to_fill + tmp.substr(new_pos + to_remplace.size(), tmp.size());
					else
						tmp2 = tmp2.substr(0, new_pos) + to_fill + tmp2.substr(new_pos + to_remplace.size(), tmp2.size());
					pos = 1;
					tmp = tmp2;
				}
				if (out_file.is_open())
				{
					if (pos == 0)
						out_file << tmp << '\n';
					else
						out_file << tmp2 << '\n';
				}
				else
					std::cout << "problem" << std::endl;
			}
			out_file.close();
		}
		else
			std::cout << "File not found" << std::endl;
	}
	else
	{
		std::cout << "Wrong number of arguments" << std::endl;
	}
}