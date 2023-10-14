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
		std::string getFirst_Name();
		std::string getLast_Name();
		std::string getNick_Name();
		std::string getDrakest_Secret();
		std::string getPhone_Number();
		// Setter methods
		void setFirst_Name(const std::string first_name);
		void setLast_Name(const std::string last_name) ;
		void setNick_Name(const std::string nick_name) ;
		void setDrakest_Secret(const std::string secret);
		void setPhone_Number(const std::string phone_number) ;
		Contact();
		~Contact();
};

#endif