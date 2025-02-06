/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:30:54 by mayache-          #+#    #+#             */
/*   Updated: 2025/02/06 17:46:43 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

void PmergeMe::parseInput(int argc, char* argv[]) {
    for (int i = 1; i < argc; ++i) {
        int num;
        if (!isPositiveInteger(argv[i], num)) {
            std::cerr << "Error: Invalid input " << argv[i] << std::endl;
            exit(EXIT_FAILURE);
        }
        vecContainer.push_back(num);
        deqContainer.push_back(num);
    }
}

bool PmergeMe::isPositiveInteger(const char* str, int& num) {
    
    // std::cout << "--> str" << str << std::endl;
    char* endptr;
    num = std::strtol(str, &endptr, 10);
    // std::cout << "--> num" << num << std::endl;
    return *endptr == '\0' && num >= 0;
}

void PmergeMe::printSequence(const std::string& message, const std::vector<int>& sequence) {
    std::cout << message;
    for (std::vector<int>::const_iterator it = sequence.begin(); it != sequence.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::sortAndTimeContainers() {
    // Sort and time vector container
    std::clock_t startVec = std::clock();
    mergeInsertSort(vecContainer);
    std::clock_t endVec = std::clock();
    double durationVec = 100.0 * (endVec - startVec) / CLOCKS_PER_SEC;

    // Sort and time deque container
    std::clock_t startDeq = std::clock();
    mergeInsertSort(deqContainer);
    std::clock_t endDeq = std::clock();
    double durationDeq = 100.0 * (endDeq - startDeq) / CLOCKS_PER_SEC;

    // Print results
    printSequence("After: ", vecContainer);
    std::cout << "Time to process a range of " << vecContainer.size() << " elements with std::vector: " << durationVec << " us" << std::endl;
    std::cout << "Time to process a range of " << deqContainer.size() << " elements with std::deque: " << durationDeq << " us" << std::endl;
}

void PmergeMe::mergeInsertSort(std::vector<int>& container) {
    if (container.size() <= 1) return;
    fordJohnsonSort(container);
}

void PmergeMe::mergeInsertSort(std::deque<int>& container) {
    if (container.size() <= 1) return;
        std::vector<int> temp(container.begin(), container.end());
    fordJohnsonSort(temp);
    std::copy(temp.begin(), temp.end(), container.begin());

    // std::cout << "container.size(): " << container.size() << std::endl;
    
}

void PmergeMe::fordJohnsonSort(std::vector<int>& container) {
    if (container.size() <= 1) return;

    // Step 1: Pair and sort elements
    std::vector<std::pair<int, int> > pairs;
    size_t i;
    for (i = 0; i + 1 < container.size(); i += 2) {
        if (container[i] > container[i + 1]) std::swap(container[i], container[i + 1]);

        // std::cout << "container[i]: " << container[i] << std::endl;
        // std::cout << "container[i + 1]: " << container[i + 1] << std::endl;
        pairs.push_back(std::make_pair(container[i], container[i + 1]));
    }

    // Handle the last unpaired element
    std::vector<int> leaders;
    if (i < container.size()) {
        // std::cout << "-->" << container[i] << std::endl;
        leaders.push_back(container[i]);
    }

    // std::cout << "pairs.size(): " << pairs.size() << std::endl;
    // Extract larger elements from each pair for initial sorting
    for (size_t j = 0; j < pairs.size(); ++j) {
        // std::cout << "pairs[j].second: " << pairs[j].second << std::endl;
        leaders.push_back(pairs[j].second);
    }

    
    
    // Step 2: Recursively sort the larger elements
    std::sort(leaders.begin(), leaders.end());

    

    // Step 3: Insert smaller elements into the sorted list
    for (size_t j = 0; j < pairs.size(); ++j) {
    // std::cout << "pairs[j]" << pairs[j].first << std::endl;
        binaryInsert(leaders, pairs[j].first);
    }

    // Copy back the sorted elements into the container
    container.assign(leaders.begin(), leaders.end());
    
}

void PmergeMe::binaryInsert(std::vector<int>& sorted, int value) {
    size_t left = 0;
    size_t right = sorted.size();
    // std::cout << "sorted.size(): " << sorted.size() << std::endl;
    
    while (left < right) {
        size_t mid = left + (right - left) / 2;
        // std::cout << "mid: " << mid << std::endl;
        // std::cout << "sorted[mid]: " << sorted[mid] << std::endl;
        if (value < sorted[mid]) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    sorted.insert(sorted.begin() + left, value);
}

const std::vector<int>& PmergeMe::getVectorContainer() const {
    return vecContainer;
}
