/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 11:25:47 by mayache-          #+#    #+#             */
/*   Updated: 2025/02/06 12:29:42 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// template <typename T>
// void printContainer(T& cont) 
// {
//     std::cout << " ------------------------------------ "<< std::endl;
//     for (typename T::iterator it = cont.begin(); it != cont.end(); ++it)
//     {
//         std::cout << "NBR is: " << *it << std::endl;
//     }
//     std::cout << " ------------------------------------ "<< std::endl;
// }

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Error: No input provided" << std::endl;
        return EXIT_FAILURE;
    }

    PmergeMe sorter;
    sorter.parseInput(argc, argv);
    sorter.printSequence("Before: ", sorter.getVectorContainer());
    sorter.sortAndTimeContainers();

    return EXIT_SUCCESS;
}
