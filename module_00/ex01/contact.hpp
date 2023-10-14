#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
	private:
		std::string First_Name;
		std::string Last_Name;
		std::string Drakest_Secret;
		std::string Nick_Name;
		std::string	Phone_Number;

	public:
		void setinfo(std::string First_Name, std::string Last_Name, 
    			std::string Nick_Name, std::string Drakest_Secret, std::string Phone_Number) ;
		std::string getFirst_Name();
		std::string getLast_Name();
		std::string getNick_Name();
		std::string getDrakest_Secret();
		std::string getPhone_Number();
		Contact();
		~Contact();
};

#endif