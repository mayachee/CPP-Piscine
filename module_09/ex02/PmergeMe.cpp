#include "PmergeMe.hpp"

// Constructor
PmergeMe::PmergeMe() {}

// Destructor
PmergeMe::~PmergeMe() {}

// Parse input
void PmergeMe::parseInput(int argc, char** argv) {
    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        for (size_t j = 0; j < arg.size(); ++j) {
            if (!isdigit(arg[j]))
                throw std::invalid_argument("Error");
        }
        int num = std::atoi(arg.c_str());
        if (num <= 0)
            throw std::invalid_argument("Error");
        vec.push_back(num);
        deq.push_back(num);
    }
}

// Merge-Insertion Sort
void PmergeMe::mergeInsertSort(std::vector<int>& container) {
    // Implement Ford-Johnson algorithm here
    std::sort(container.begin(), container.end());
}

void PmergeMe::mergeInsertSort(std::deque<int>& container) {
    // Implement Ford-Johnson algorithm here
    std::sort(container.begin(), container.end());
}

// Measure execution time
template <typename T>
double PmergeMe::measureExecutionTime(T& container) {
    clock_t start = clock();
    mergeInsertSort(container);
    clock_t end = clock();
    return static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000; // Time in microseconds
}



// Sort and display results
void PmergeMe::sortAndDisplay() {
    clock_t vstart;
    float vres;
    vstart = clock();

    std::cout << "Before: ";
    for (size_t i = 0; i < vec.size(); ++i)
        std::cout << vec[i] << " ";
    std::cout << std::endl;

    clock_t dstart;
    float dres;
    dstart = clock();
    
    std::cout << "After: ";
    for (size_t i = 0; i < vec.size(); ++i)
        std::cout << vec[i] << " ";
    std::cout << std::endl;


    vres = clock() - vstart;
    std::cout << "Time to process a range of 5 elements with std::vector : " << std::fixed << std::setprecision(5) << vres / CLOCKS_PER_SEC << " us" << std::endl;
    

    dres = clock() - dstart;
    std::cout << "Time to process a range of 5 elements with std::deque : " << std::fixed << std::setprecision(5) << dres / CLOCKS_PER_SEC << " us" << std::endl;
}
