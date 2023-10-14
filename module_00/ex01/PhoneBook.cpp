/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:07:00 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/14 13:41:21 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

// Setter methods
void setFirst_Name(const std::string First_Name) {
    First_Name = First_Name;
}

void setLast_Name(const std::string Last_Name) {
    Last_Name = Last_Name;
}

void setNick_Name(const std::string Nick_Name) {
    Nick_Name = Nick_Name;
}

void setDrakest_Secret(const std::string Drakest_Secret) {
    Drakest_Secret = Drakest_Secret;
}

void setPhone_Number(const std::string Phone_Number) {
    Phone_Number = Phone_Number;
}

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

// void	Phonebook::get_contact_info(int i)
// {
// 	std::cout << "first name : ";
// 	std::cout << phone[i].First_Name << std::endl;
// 	std::cout << "last name : ";
// 	std::cout << phone[i].Last_Name << std::endl;
// 	std::cout << "nickname : ";
// 	std::cout << phone[i].Nick_Name << std::endl;
// 	std::cout << "darkest secret : ";
// 	std::cout << phone[i].Drakest_Secret << std::endl;
// 	std::cout << "phone number : ";
// 	std::cout << phone[i].Phone_Number << std::endl;
// }

void Phonebook::get_contact_info(int i)
{
    std::cout << "first name : " << phone[i].getFirst_Name() << std::endl;
    std::cout << "last name : " << phone[i].getLast_Name() << std::endl;
    std::cout << "nickname : " << phone[i].getNick_Name() << std::endl;
    std::cout << "darkest secret : " << phone[i].getDrakest_Secret() << std::endl;
    std::cout << "phone number : " << phone[i].getPhone_Number() << std::endl;
}

void Phonebook::fill_contact_info(int i)
{
    std::cout << std::endl;
    std::cout << "---->> CONTACT #" << i << " <<----" << std::endl;
    phone[i].First_Name(getInput("Please enter your first name: "));
    phone[i].Last_Name(getInput("Please enter your last name: "));
    phone[i].Nick_Name(getInput("Please enter your nick name: "));
    phone[i].Drakest_Secret(getInput("Please enter your Darkest Secret: "));
    phone[i].Phone_Number(getInput("Please enter your Phone Number (+212):"));
}


// void Phonebook::fill_contact_info(int i)
// {
// 	std::cout << std::endl;
//     std::cout << "---->> CONTACT #" << i << " <<----" << std::endl;
//     phone[i].First_Name = getInput("Please enter you first name: ");
//     phone[i].Last_Name = getInput("Please enter you last name: ");
//     phone[i].Nick_Name = getInput("Please enter you nick name: ");
//     phone[i].Drakest_Secret = getInput("Please enter you Drackest Secret: ");
//     phone[i].Phone_Number = getInput("Please enter you Phone Number (+212) :");
// }


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
		if (phone[j].getFirst_Name().length() > 10)
			std::cout << std::setw(10) << phone[j].getFirst_Name().substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(10) << phone[j].getFirst_Name() << "|";
		if (phone[j].getLast_Name().length() > 10)
			std::cout << std::setw(10) << phone[j].getLast_Name().substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(10) << phone[j].getLast_Name().substr(0, 9) + "." << "|";
		if (phone[j].getNick_Name().length() > 10)
			std::cout << std::setw(10) << phone[j].getNick_Name().substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(10) << phone[j].getNick_Name() << "|";
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