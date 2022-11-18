#include "./PhoneBook.hpp"

int	main(void)
{
	std::string	command;
	PhoneBook book;

	std::cout << "\033[1;32mPhoneBook ready.\033[0m" << std::endl;
	while (1)
	{
		if (command == "")
			std::cout << "\033[0;32mWhat do you want? (ADD, SEARCH, EXIT)" << std::endl;
		std::cout << "> \033[0m";
    	std::getline(std::cin, command, '\n');
		if (command == 	"ADD")
			book.Add();
		else if (command == "SEARCH")
			book.Search();
		else if (command == "EXIT")
			break;
		else
			std::cout << "\033[0;31mCommand not found!\033[0m" << std::endl;
		command.assign("");
	}
	std::cout  << "Program ending..." << std::endl;
	return (0);
}