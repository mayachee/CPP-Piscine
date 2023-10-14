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
            // Setter methods
            void setFirst_Name(const std::string& first_name);
            void setLast_Name(const std::string& last_name) ;
            void setNick_Name(const std::string& nick_name) ;
            void setDrakest_Secret(const std::string& secret);
            void setPhone_Number(const std::string& phone_number) ;
        	Phonebook();
        	~Phonebook();
};

#endif
