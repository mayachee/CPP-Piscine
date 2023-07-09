// #include "contact.hpp"
#include "phonebook.hpp"

int main()
{
    std::string index;
    Phonebook info;
    int count_info = 0;
    std::cout << "My Awesome PhoneBook" << std::endl;
    while (1)
    {
        std::cout << "pick one: ADD | SEARCH | EXIT : " << std::endl;
        std::cout << "--->";
		std::getline(std::cin, index);
        if (index == "ADD")
        {
            if (count_info == 8)
				count_info = 0;
            info.fill_contact_info(count_info);
            info.get_contact_info(count_info);
            // if (info.contact_number <= 8)
			// 	info.contact_number++;
            count_info++;
        }
        else if (index == "SEARCH")
        {
            std::cout << "dffffff";
        }
        else if (index == "EXIT")
        {
            std::cout << "Oh, you leave this book" << std::endl;
            break ;
        }
        else
            std::cout << "something wrong" << std::endl;
    }
}