/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:06:57 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/14 19:55:46 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
    std::string index;
    Phonebook info;
    int count_info = 0;
    info.contact_number = 0;
    std::cout << "---- My Awesome PhoneBook -----" << std::endl;
    while (1)
    {
        std::cout << "pick one: ADD | SEARCH | EXIT : " << std::endl;
        std::cout << "--->";
		std::getline(std::cin, index);
        if (index == "ADD")
        {
            if (count_info == 8)
            {
				count_info = 0;
            }
            info.fill_info(count_info);
            if (info.contact_number <= 7)
				info.contact_number++;
            count_info++;
        }
        else if (index == "SEARCH")
        {
            if (info.contact_number == 0)
            {
                std::cout << "You don't have any contact" << std::endl;
            }
            else
            {
                int indexInt = 0;
                bool quit = false;
                std::cout << "who are you looking for?" << std::endl;
                info.search_contact();
                while (quit == false)
                {
                    std::cout << "Please, enter Id :" << std::endl;
                    std::getline(std::cin, index);
                    if (std::isdigit(index[0]))
                    {
                        quit = false;
                        indexInt = std::stoi(index);
                        indexInt++;
                        if (indexInt > info.contact_number)
                        {
                            quit = false;
                            std::cout << "This contact doesn't exist" << std::endl;
                        }
                        else
                            quit = true;
                        if (quit == true)
                        {
                            std::cout << "This is Result : " << std::endl;
                            info.get_info(indexInt - 1);
                        }
                    }
                }
            }
        }
        else if (index == "EXIT" || std::cin.eof())
        {
            std::cout << "Oh, you leave this book" << std::endl;
            break ;
        }
        else
            std::cout << "something wrong" << std::endl;
    }
}