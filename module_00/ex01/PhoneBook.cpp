#include "phonebook.hpp"

// void	Phonebook::get_contact(int i)
// {
// 	if(i > contact_number || i > 7)
// 	{
// 		std::cout << "wrong index" << std::endl;
// 		return ;
// 	}
// 	std::cout << "first name : ";
// 	std::cout << phone[i].First_Name << std::endl;
// 	std::cout << "last name : ";
// 	std::cout << phone[i].Last_Name << std::endl;
// 	std::cout << "nickname : ";
// 	std::cout << phone[i].Nick_Nanme << std::endl;
// 	std::cout << "darkest secret : ";
// 	std::cout << phone[i].Drackest_Secret << std::endl;
// 	std::cout << "phone number : ";
// 	std::cout << phone[i].Phone_Number << std::endl;
// }

void Phonebook::fill_contact_info(int i)
{
	std::cout << "Please, entre your First Name : " << '\n';
	std::getline(std::cin, phone[i].First_Name);
	std::cout << "Please, entre your Last Name : " << '\n';
	std::getline(std::cin, phone[i].Last_Name);
	std::cout << "Please, entre your Nick Name : " << '\n';
	std::getline(std::cin, phone[i].Nick_Nanme);
	std::cout << "Please, entre your Drackest Secret : " << '\n';
	std::getline(std::cin, phone[i].Drackest_Secret);
	std::cout << "Please, entre your Phone Number (+212) : " << '\n';
	std::getline(std::cin, phone[i].Phone_Number);
}