/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 11:26:00 by mayache-          #+#    #+#             */
/*   Updated: 2025/02/01 11:47:24 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int PmergeMe::myStoi(const std::string& str) {
    size_t i = 0;
    while (i < str.size() && std::isspace(str[i])) {
        ++i;
    }

    bool negative = false;
    if (i < str.size() && (str[i] == '-' || str[i] == '+')) {
        negative = (str[i] == '-');
        ++i;
    }

    if (i == str.size() || !std::isdigit(str[i])) {
        throw std::invalid_argument("Invalid argument: " + str);
    }

    int result = 0;
    while (i < str.size() && std::isdigit(str[i])) {
        result = result * 10 + (str[i] - '0');
        if (result > INT_MAX || result < INT_MIN) {
            throw std::out_of_range("Argument out of range: " + str);
        }
        ++i;
    }

    while (i < str.size() && std::isspace(str[i])) {
        ++i;
    }

    if (i != str.size()) {
        throw std::invalid_argument("Invalid argument: " + str);
    }

    return negative ? -result : result;
}

// Function to generate the Jacobsthal sequence
std::vector<int> PmergeMe::generateJacobsthal(int maxNeeded) {
    std::vector<int> jacob;
    jacob.push_back(0);
    jacob.push_back(1);
    while (jacob.back() < maxNeeded) {
        int nextVal = jacob[jacob.size() - 1] + 2 * jacob[jacob.size() - 2];
        jacob.push_back(nextVal);
    }
    return jacob;
}

// Function to validate and parse command-line arguments
std::vector<int> PmergeMe::parseArguments(int argc, char* argv[]) 
{
    std::vector<int> arr;
    for (int i = 1; i < argc; ++i) {
        // char* endPtr;
        int num = myStoi(argv[i]);
        std::cout << "num: " << num << std::endl;
        // std::cout << "endPtr: " << &endPtr << std::endl;
        if (num < 0) {
            std::cerr << "Error" << std::endl;
            exit(1);
        }
        arr.push_back(static_cast<int>(num));
    }
    return arr;
}

// Ford-Johnson Merge-Insertion Sort for std::vector
std::vector<int> PmergeMe::mergeInsertionSortVector(const std::vector<int>& arr) {
    if (arr.size() <= 1) {
        return arr;
    }

    // Step 2: Handle Struggler (odd-length array)
    int struggler = -1;
    std::vector<int> workingArray;
    if (arr.size() % 2 != 0) {
        struggler = arr.back();
        workingArray = std::vector<int>(arr.begin(), arr.end() - 1);
    } else {
        workingArray = arr;
    }

    // Step 3: Pairing and Swapping
    std::vector<std::pair<int, int> > pairs;
    for (size_t i = 0; i < workingArray.size(); i += 2) {
        int first = workingArray[i];
        int second = workingArray[i + 1];
        if (first < second) {
            std::swap(first, second); // Swap to make larger first
        }
        pairs.push_back(std::make_pair(first, second));
    }

    // Step 4: Recursively Sort Larger Elements
    std::vector<int> largerElements;
    for (size_t i = 0; i < pairs.size(); ++i) {
        largerElements.push_back(pairs[i].first);
    }
    std::vector<int> sortedLarger = mergeInsertionSortVector(largerElements);

    // Step 5: Build Main Chain and Pend
    std::vector<int> mainChain = sortedLarger;
    std::vector<int> pend;
    for (size_t i = 0; i < pairs.size(); ++i) {
        pend.push_back(pairs[i].second);
    }

    // Insert first pend element if applicable
    if (!pend.empty() && pend[0] <= mainChain[0]) {
        mainChain.insert(mainChain.begin(), pend[0]);
        pend.erase(pend.begin());
    }

    // Step 6: Generate Jacobsthal Sequence
    std::vector<int> jacobSequence = generateJacobsthal(static_cast<int>(pend.size()) );

    // Step 7: Generate Insertion Order
    std::vector<int> insertionOrder;
    for (int i = jacobSequence.size() - 1; i >= 1; --i) {
        int j = jacobSequence[i];
        if (j <= static_cast<int>(pend.size()) ) {
            insertionOrder.push_back(j - 1);
        }
    }

    // Step 8: Insert Pend Elements into Main Chain
    for (size_t i = 0; i < insertionOrder.size(); ++i) {
        int index = insertionOrder[i];
        if (index < static_cast<int>(pend.size()) ) {
            int element = pend[index];
            int pos = binarySearch(mainChain, element);
            mainChain.insert(mainChain.begin() + pos, element);
        }
    }

    // Step 9: Insert Struggler
    if (struggler != -1) {
        int pos = binarySearch(mainChain, struggler);
        mainChain.insert(mainChain.begin() + pos, struggler);
    }

    return mainChain;
}

// Ford-Johnson Merge-Insertion Sort for std::deque
std::deque<int> PmergeMe::mergeInsertionSortDeque(const std::deque<int>& arr) {
    if (arr.size() <= 1) {
        return arr;
    }

    // Step 2: Handle Struggler (odd-length array)
    int struggler = -1;
    std::deque<int> workingArray;
    if (arr.size() % 2 != 0) {
        struggler = arr.back();
        workingArray = std::deque<int>(arr.begin(), arr.end() - 1);
    } else {
        workingArray = arr;
    }

    // Step 3: Pairing and Swapping
    std::vector<std::pair<int, int> > pairs;
    for (size_t i = 0; i < workingArray.size(); i += 2) {
        int first = workingArray[i];
        int second = workingArray[i + 1];
        if (first < second) {
            std::swap(first, second); // Swap to make larger first
        }
        pairs.push_back(std::make_pair(first, second));
    }

    // Step 4: Recursively Sort Larger Elements
    std::deque<int> largerElements;
    for (size_t i = 0; i < pairs.size(); ++i) {
        largerElements.push_back(pairs[i].first);
    }
    std::deque<int> sortedLarger = mergeInsertionSortDeque(largerElements);

    // Step 5: Build Main Chain and Pend
    std::deque<int> mainChain = sortedLarger;
    std::deque<int> pend;
    for (size_t i = 0; i < pairs.size(); ++i) {
        pend.push_back(pairs[i].second);
    }

    // Insert first pend element if applicable
    if (!pend.empty() && pend[0] <= mainChain[0]) {
        mainChain.insert(mainChain.begin(), pend[0]);
        pend.erase(pend.begin());
    }

    // Step 6: Generate Jacobsthal Sequence
    std::vector<int> jacobSequence = generateJacobsthal(static_cast<int>(pend.size()) );

    // Step 7: Generate Insertion Order
    std::vector<int> insertionOrder;
    for (int i = jacobSequence.size() - 1; i >= 1; --i) {
        int j = jacobSequence[i];
        if (j <= static_cast<int>(pend.size()) ) {
            insertionOrder.push_back(j - 1);
        }
    }

    // Step 8: Insert Pend Elements into Main Chain
    for (size_t i = 0; i < insertionOrder.size(); ++i) {
        int index = insertionOrder[i];
        if (index < static_cast<int>(pend.size()) ) {
            int element = pend[index];
            int pos = binarySearch(mainChain, element);
            mainChain.insert(mainChain.begin() + pos, element);
        }
    }

    // Step 9: Insert Struggler
    if (struggler != -1) {
        int pos = binarySearch(mainChain, struggler);
        mainChain.insert(mainChain.begin() + pos, struggler);
    }

    return mainChain;
}



PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const & src) {
    *this = src;
}

PmergeMe::~PmergeMe() {}

PmergeMe & PmergeMe::operator=(PmergeMe const & src) {
    (void)src;
    return *this;
}


