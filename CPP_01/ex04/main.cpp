#include "replace.hpp"

int main(int argc, char **argv)
{
	if (!check_arg(argc, argv))
		return (0);
	
	std::ifstream	fout(argv[1]);
	std::ofstream	file(std::string(argv[1]) + ".replace");
	std::string		buf;
	std::string		str;
	std::string		s_1 = std::string(argv[2]);
	std::string		s_2 = std::string(argv[3]);
	int				i = 1;
	int				pos = 0;
	bool			flag = false;
	int 			len_s1 = std::string(argv[2]).length();
	int 			len_s2 = std::string(argv[3]).length();

	if (!fout.is_open())
		std::cout << "Error" << std::endl;
	else
	{
		while(42)
		{
			if (!getline(fout, buf))
				break ;
			str += buf + "\n";
			flag = true;
		}
		if (flag == true)
			str.erase(str.length() - 1);
		if (s_1 != s_2)
		{
			while (42)
			{
				i = str.find(s_1, pos);
				if (i == -1)
					break ;
				str.erase(i, len_s1);
				str.insert(i, s_2);
				pos = i + len_s2;
			}
		}
		file << str;
		fout.close();
	}
	return (0);
}
