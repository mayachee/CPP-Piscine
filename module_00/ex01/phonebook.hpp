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
        std::string Drackest_Secret;
        std::string Nick_Nanme;
        std::string	Phone_Number;
};

class Phonebook
{
    private:
        Contact phone[8];
    public:
            // int		contact_number;
            void	fill_contact_info(int i);
        // 	void	get_contact(int i);
        // 	void	display_contact(void);
        // 	Phonebook();
        // 	~Phonebook();
};

#endif