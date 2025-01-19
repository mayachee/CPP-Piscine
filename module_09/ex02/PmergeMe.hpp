
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <string>
#include <stdexcept>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <algorithm>

class PmergeMe {
public:
    PmergeMe();
    ~PmergeMe();

    void parseInput(int argc, char** argv);
    void sortAndDisplay();

private:
    std::vector<int> vec;
    std::deque<int> deq;

    void mergeInsertSort(std::vector<int>& container);
    void mergeInsertSort(std::deque<int>& container);

    template <typename T>
    double measureExecutionTime(T& container);
};

#endif
