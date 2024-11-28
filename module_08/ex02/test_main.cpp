#include <iostream>
#include "MutantStack.hpp"

int main()
{
    try
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << "top: " << mstack.top() << std::endl; // Expected output: 17
        mstack.pop();
        std::cout << "size: " << mstack.size() << std::endl; // Expected output: 1

        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(50);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();

        std::cout << "Elements in mstack:" << std::endl;
        while (it != ite)
        {
            std::cout << *it << std::endl; // Expected output: 3 5 737 50
            ++it;
        }

        std::cout << "Elements in s:" << std::endl;
        std::stack<int> s(mstack);
        while (!s.empty()) {
            std::cout << s.top() << std::endl; // Expected output: 50 737 5 3
            s.pop();
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}