/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:14:26 by mayache-          #+#    #+#             */
/*   Updated: 2025/02/06 12:29:52 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <string>
#include <chrono>
#include <iostream>

class PmergeMe {
private:
    std::vector<int> vecContainer;
    std::deque<int> deqContainer;

    // Utility methods
    bool isPositiveInteger(const char* str, int& num);
    void fordJohnsonSort(std::vector<int>& container);
    void binaryInsert(std::vector<int>& sorted, int value);
    void mergeInsertSort(std::vector<int>& container);
    void mergeInsertSort(std::deque<int>& container);

public:
    PmergeMe();
    void parseInput(int argc, char* argv[]);
    void printSequence(const std::string& message, const std::vector<int>& sequence);
    void sortAndTimeContainers();
    const std::vector<int>& getVectorContainer() const;
};

#endif // PMERGEME_HPP
