

#include <iostream>
#include <stack>
#include <vector>
#include <cstdlib>
#include <algorithm>

class PmergeMe {
    private:
        std::stack<int> args;
    public:
        PmergeMe(char **av);
        void fill_stack(char **av, std::stack<int> &stack);
        void run();
        void swap_elements(std::stack<int> &stack, int index1, int index2);
        void sort_elements(std::stack<int> &str_stream);

        void swap_two_elements(int index1, int index2);
};