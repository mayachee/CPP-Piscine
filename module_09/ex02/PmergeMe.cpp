
#include "PmergeMe.hpp"


PmergeMe::PmergeMe(char **av) {
    fill_stack(av, args);
}

void PmergeMe::fill_stack(char **av, std::stack<int> &stack) {
    for (int i = 1; av[i] != NULL; i++) {
        stack.push(std::atoi(av[i]));
        std::cout << "Pushed " << stack.top() << " to stack" << std::endl;
    }
    sort_elements(stack);
}

void PmergeMe::run()
{
    std::cout << "Running PmergeMe" << std::endl;
}

void PmergeMe::swap_elements(std::stack<int> &stack, int index1, int index2)
{
    std::vector<int> temp;
    while (!stack.empty()) {
        temp.push_back(stack.top());
        stack.pop();
        std::cout << "----- Pushed " << stack.top() << std::endl;

    }
    std::swap(temp[index1], temp[index2]);
    for (std::vector<int>::reverse_iterator it = temp.rbegin(); it != temp.rend(); ++it) {
        stack.push(*it);
        std::cout << "----- Pushed " << stack.top() << std::endl;

    }
}

void PmergeMe::swap_two_elements(int index1, int index2)
{
    int buffer = index1;
    index1 = index2;
    index2 = buffer;

    std::cout << "Swapped " << index1 << " with " << index2 << std::endl;
}
void PmergeMe::sort_elements(std::stack<int> &str_stream)
{
    std::vector<int> temp;
    while (!str_stream.empty()) {
        temp.push_back(str_stream.top());
        str_stream.pop();
    }
    std::sort(temp.begin(), temp.end());
    // std::swap(temp[index1], temp[index2]);
    for (std::vector<int>::reverse_iterator it = temp.rbegin(); it != temp.rend(); ++it) {
        str_stream.push(*it);
        swap_two_elements(*it, *it + 1);
        std::cout << " Pushed " << str_stream.top() << std::endl;
    }

    for (std::vector<int>::reverse_iterator it = temp.rbegin(); it != temp.rend(); ++it) {
        str_stream.push(*it);
        std::cout << "----- Pushed " << str_stream.top() << std::endl;
    }
}

