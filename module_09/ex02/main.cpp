/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 11:25:47 by mayache-          #+#    #+#             */
/*   Updated: 2025/02/01 11:49:42 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char* argv[]) {

    PmergeMe pmergeMe;
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <list of positive integers>" << std::endl;
        return 1;
    }

    // Parse and validate input
    std::vector<int> arr = pmergeMe.parseArguments(argc, argv);

    // Display "Before" array
    std::cout << "Before: ";
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Sort using std::vector and measure time
    clock_t startVector = clock();
    std::vector<int> sortedVector = pmergeMe.mergeInsertionSortVector(arr);
    clock_t endVector = clock();
    double timeVector = static_cast<double>(endVector - startVector) / CLOCKS_PER_SEC * 1e1;

    // Sort using std::deque and measure time
    std::deque<int> arrDeque(arr.begin(), arr.end());
    clock_t startDeque = clock();
    std::deque<int> sortedDeque = pmergeMe.mergeInsertionSortDeque(arrDeque);
    clock_t endDeque = clock();
    double timeDeque = static_cast<double>(endDeque - startDeque) / CLOCKS_PER_SEC * 1e1;

    // Display "After" array
    std::cout << "After: ";
    for (size_t i = 0; i < sortedVector.size(); ++i) {
        std::cout << sortedVector[i] << " ";
    }
    std::cout << std::endl;

    // Display time taken for each container
    std::cout << "Time to process a range of " << arr.size()
              << " elements with std::vector: " << timeVector << " us" << std::endl;
    std::cout << "Time to process a range of " << arr.size()
              << " elements with std::deque: " << timeDeque << " us" << std::endl;

    return 0;
}