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
	std::cout << std::endl;
    std::cout << "---->> CONTACT #" << i << " <<----" << std::endl;
    phone[i].First_Name = getInput("Please enter you first name: ");
    phone[i].Last_Name = getInput("Please enter you last name: ");
    phone[i].Nick_Name = getInput("Please enter you nick name: ");
    phone[i].Drackest_Secret = getInput("Please enter you Drackest Secret: ");
    phone[i].Phone_Number = getInput("Please enter you Phone Number (+212) :");
}


void Phonebook::search_contact(void)
{
	int	j = 0;

	if (contact_number == 0)
	{
		std::cout << "no contact" << std::endl;
		return ;
	}
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << std::setw(10) << "index " << "|";
	std::cout << std::setw(10) << " first name " << "|";
	std::cout << std::setw(10) << " last name " << "|";
	std::cout << std::setw(10) << " nickname" << "|" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;

	while (j < contact_number && j < 8)
	{
		std::cout << std::setw(10) << j << "|";
		if (phone[j].First_Name.length() > 10)
			std::cout << std::setw(10) << phone[j].First_Name.substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(10) << phone[j].First_Name << "|";
		if (phone[j].Last_Name.length() > 10)
			std::cout << std::setw(10) << phone[j].Last_Name.substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(10) << phone[j].Last_Name.substr(0, 9) + "." << "|";
		if (phone[j].Nick_Name.length() > 10)
			std::cout << std::setw(10) << phone[j].Nick_Name.substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(10) << phone[j].Nick_Name << "|";
		std::cout << std::endl;
		j++;
	}
	std::cout << "-----------------------------------------------" << std::endl;
}

Phonebook::Phonebook()
{
	contact_number = 0;
}
Phonebook::~Phonebook()
{

}