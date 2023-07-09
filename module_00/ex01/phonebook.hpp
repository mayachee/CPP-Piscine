#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

class Contact
{
    private:

    public:
        std::string First_Name;
        std::string Last_Name;
        std::string Nick_Name;
        std::string Drackest_Secret;
        std::string	Phone_Number;
};

class Phonebook
{
    private:
        Contact phone[8];
        std::string getInput(std::string str);
    
    public:
            // int		contact_number;
            void        fill_contact_info(int i);
        	void        get_contact_info(int i);
        // 	void	display_contact(void);
        // 	Phonebook();
        // 	~Phonebook();
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