#include "phonebook.hpp"

std::string Phonebook::getInput(std::string str)
{
	std::string input = "";
	bool	vld = false;

	std::cout << str << '\n';
	while (!vld)
	{
		std::getline(std::cin, input);
		if (!input.empty())
            vld = true;
        else
		{
            std::cin.clear();
            std::cout << "Invalid input; please try again." << std::endl;
		}
	}
	return (input);
}

void	Phonebook::get_contact_info(int i)
{
	// if(i > contact_number || i > 7)
	// {
	// 	std::cout << "wrong index" << std::endl;
	// 	return ;
	// }
	// phone[i].First_Name = "ssssss";
	// phone[i].Last_Name = "ssssss";
	// phone[i].Nick_Name = "ssssss";
	// phone[i].Drackest_Secret = "ssssss";
	// phone[i].Phone_Number = "ssssss";
	std::cout << "first name : ";
	std::cout << phone[i].First_Name << std::endl;
	std::cout << "last name : ";
	std::cout << phone[i].Last_Name << std::endl;
	std::cout << "nickname : ";
	std::cout << phone[i].Nick_Name << std::endl;
	std::cout << "darkest secret : ";
	std::cout << phone[i].Drackest_Secret << std::endl;
	std::cout << "phone number : ";
	std::cout << phone[i].Phone_Number << std::endl;
}

void Phonebook::fill_contact_info(int i)
{
	// std::cout << "Please, enter you First Name : " << '\n';
	std::cout << std::endl;
    std::cout << "---->> CONTACT #" << i << " <<----" << std::endl;
    phone[i].First_Name = getInput("Please enter you first name: ");
	// std::cout << phone[i].First_Name << '\n';
    phone[i].Last_Name = getInput("Please enter you last name: ");
    phone[i].Nick_Name = getInput("Please enter you nick name: ");
    phone[i].Drackest_Secret = getInput("Please enter you Drackest Secret: ");
    phone[i].Phone_Number = getInput("Please enter you Phone Number (+212) :");
	// std::getline(std::cin, getInput(phone[i].First_Name));
	// std::cout << "Please, entre your Last Name : " << '\n';
	// std::getline(std::cin, phone[i].Last_Name);
	// std::cout << "Please, entre your Nick Name : " << '\n';
	// std::getline(std::cin, phone[i].Nick_Name);
	// std::cout << "Please, entre your Drackest Secret : " << '\n';
	// std::getline(std::cin, phone[i].Drackest_Secret);
	// std::cout << "Please, entre your Phone Number (+212) : " << '\n';
	// std::getline(std::cin, phone[i].Phone_Number);
}