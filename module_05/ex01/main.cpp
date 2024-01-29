/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:42:03 by mayache-          #+#    #+#             */
/*   Updated: 2024/01/29 18:28:07 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat b1("John", 50);
        Form form1("Form1", 75, 50);
        std::cout << b1 << std::endl;
        std::cout << form1 << std::endl;

        b1.signForm(form1);
        b1.execute(form1);
        std::cout << "-------------\n";
        b1.beSigned(b1);
        std::cout << "-------------\n";

        Bureaucrat b2("Alice", 1);
        Form form2("Form2", 10, 5);
        std::cout << b2 << std::endl;
        std::cout << form2 << std::endl;

        b2.signForm(form2);
        form2.execute(b2);

        // Uncommenting the line below will throw an exception
        // Form form3("Form3", 151, 160);

    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}