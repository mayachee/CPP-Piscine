/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:07:00 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/19 18:17:14 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string Phonebook::getInput(std::string str)
{
	std::string input = "";
	bool	vld = false;
	
	if (std::cin.eof())
		exit(0);
	std::cout << str << '\n';
	while (!vld)
	{
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
		if (!input.empty())
		{
            vld = true;
		}
        else
		{
            std::cin.clear();
            std::cout << "Invalid input; please try again." << std::endl;
		}
	}
	return (input);
}

void Phonebook::get_info(int i)
{
    std::cout << "first name : " << contact[i].getFirst_Name() << std::endl;
    std::cout << "last name : " << contact[i].getLast_Name() << std::endl;
    std::cout << "nickname : " << contact[i].getNick_Name() << std::endl;
    std::cout << "darkest secret : " << contact[i].getDrakest_Secret() << std::endl;
    std::cout << "phone number : " << contact[i].getPhone_Number() << std::endl;
}

void Phonebook::fill_info(int i)
{
    if (i >= 0 && i < 8)
	{
        contact[i].setFirst_Name(getInput("Please Enter your First Name"));
        contact[i].setLast_Name(getInput("Please Enter your Last Name"));
        contact[i].setNick_Name(getInput("Please Enter your Nickname"));
        contact[i].setDrakest_Secret(getInput("Please Enter your Darkest Secret"));
        contact[i].setPhone_Number(getInput("Please Enter your phone Number"));
    }
}

void Phonebook::search_contact(void)
{
	int	j = 0;
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << std::setw(11) << "index" << "|";
	std::cout << std::setw(11) << "first name" << "|";
	std::cout << std::setw(11) << "last name" << "|";
	std::cout << std::setw(11) << "nickname" << "|" << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
	while (j < contact_number && j < 8)
	{
		std::cout << std::setw(11) << j << "|";
		if (contact[j].getFirst_Name().length() > 10)
			std::cout << std::setw(11) << contact[j].getFirst_Name().substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(11) << contact[j].getFirst_Name() << "|";
		if (contact[j].getLast_Name().length() > 10)
			std::cout << std::setw(11) << contact[j].getLast_Name().substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(11) << contact[j].getLast_Name()<< "|";
		if (contact[j].getNick_Name().length() > 10)
			std::cout << std::setw(11) << contact[j].getNick_Name().substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(11) << contact[j].getNick_Name() << "|";
		std::cout << std::endl;
		j++;
	}
	std::cout << "------------------------------------------------" << std::endl;
}

Phonebook::Phonebook()
{
	contact_number = 0;
}
Phonebook::~Phonebook()
{

}