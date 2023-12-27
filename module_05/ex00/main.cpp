#include "Bureaucrat.hpp"

int main() {
    //Exceptions
    try {
        Bureaucrat b1("John", 50);
        std::cout << b1 << std::endl;

        b1.incrementGrade();
        std::cout << b1 << std::endl;

        Bureaucrat b2("Alice", 1);
        std::cout << b2 << std::endl;

        b2.decrementGrade();
        std::cout << b2 << std::endl;

        // Uncommenting the line below will throw an exception
        // Bureaucrat b3("Bob", 151);

    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
