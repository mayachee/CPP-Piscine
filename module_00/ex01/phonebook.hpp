#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "contact.hpp"

class Phonebook
{
    private:
        Contact phone[8];
        std::string getInput(std::string str);
    
    public:
            int         contact_number;
            void        fill_contact_info(int i);
        	void        get_contact_info(int i);
        	void        search_contact(void);
        	Phonebook();
        	~Phonebook();
};

#endif

// std::string Contact::_getInput(std::string str) const {
//     std::string input = "";
//     bool        valid = false;
//     do
//     {
//         std::cout << str << std::flush;
//         std::getline(std::cin, input);
//         if (std::cin.good() && !input.empty())
//             valid = true;
//         else {
//             std::cin.clear();
//             std::cout << "Invalid input; please try again." << std::endl;
//         }
//     } while (!valid);
//     return (input);
// }

	// while (j < contact_number && j < 8)
	// {
	// 	std::cout << j << "|";
	// 	if (phone[j].FirstName.length() > 10)
	// 		std::cout << phone[j].FirstName.substr(0, 9) + "." << "|";
	// 	else
	// 		std::cout << phone[j].FirstName << "|";
	// 	if (phone[j].LastName.length() > 10)
	// 		std::cout << phone[j].LastName.substr(0, 9) + "." << "|";
	// 	else
	// 		std::cout << phone[j].LastName << "|";
	// 	if (phone[j].NickNanme.length() > 10)
	// 		std::cout << phone[j].NickNanme.substr(0, 9) + "." << "|" << std::endl;
	// 	else
	// 		std::cout << phone[j].NickNanme << "|" << std::endl;
	// 	std::cout << "--------------------------------------------" << std::endl;
	// 	j++;
	// }