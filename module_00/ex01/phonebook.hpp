#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "contact.hpp"

class Phonebook
{
    private:
        Contact contact[8];
    
    public:
        std::string getInput(std::string str);
            int         contact_number;
            void        fill_info(int i);
        	void        get_info(int i);
        	void        search_contact(void);
        	Phonebook();
        	~Phonebook();
};

#endif
