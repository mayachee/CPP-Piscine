/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:06:57 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/14 12:55:18 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
    std::string index;
    Phonebook info;
    int count_info = 0;
    std::cout << "---- My Awesome PhoneBook -----" << std::endl;
    while (1)
    {
        std::cout << "pick one: ADD | SEARCH | EXIT : " << std::endl;
        std::cout << "--->";
		std::getline(std::cin, index);
        if (index == "ADD")
        {
            if (count_info == 8)
				count_info = 0;
            info.fill_contact_info(count_info);
            if (info.contact_number <= 8)
				info.contact_number++;
            count_info++;
        }
        // else if (index == "SEARCH")
        // {
        //     std::cout << "who are you looking for?" << std::endl;
        //     info.search_contact();
        //     while (true)
		// 	{
        //         std::cout << "Please, enter Id :" << std::endl;
		// 		std::getline(std::cin, index);
		// 		if (index.length() == 1 && std::isdigit(index[0]))
		// 			break;
		// 		else
		// 			std::cout << "who are you looking for?";
		// 	}
		// 	std::cout << "This is Result : " << std::endl;
        //     info.get_contact_info(std::stoi(index));
        // }
        else if (index == "EXIT" || index.empty())
        {
            std::cout << "Oh, you leave this book" << std::endl;
            break ;
        }
        else
            std::cout << "something wrong" << std::endl;
    }
}