/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:30:29 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/19 19:30:30 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    // Displaying the address of the string
    std::cout << "Address of the string: " << &str << std::endl;

    // Displaying the address of the string using stringPTR
    std::cout << "Address of the string using stringPTR: " << stringPTR << std::endl;

    // Displaying the address of the string using stringREF
    std::cout << "Address of the string using stringREF: " << &stringREF << std::endl;

    // Displaying the string using the pointer
    std::cout << "String using the pointer (stringPTR): " << *stringPTR << std::endl;

    // Displaying the string using the reference
    std::cout << "String using the reference (stringREF): " << stringREF << std::endl;

    return 0;
}
