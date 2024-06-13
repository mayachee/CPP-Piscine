/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:06:04 by mayache-          #+#    #+#             */
/*   Updated: 2024/06/14 00:24:20 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
    try {
        // Test default constructor
        Array<int> arr1(4);
        std::cout << "arr1 size: " << arr1.size() << std::endl;

        // Test parameterized constructor
        Array<int> arr2(5);
        std::cout << "arr2 size: " << arr2.size() << std::endl;
        for (unsigned int i = 0; i < arr2.size(); ++i) {
            arr2[i] = i;
            std::cout << "---->> arr2[" << i << "]: " << arr2[i] << std::endl;
        }

        // Test copy constructor
        Array<int> arr3 = arr2;
        std::cout << "arr3 size: " << arr3.size() << std::endl;
        arr3[0] = 10;
        std::cout << "arr3[0]: " << arr3[0] << std::endl;
        std::cout << "arr2[0] (should be unchanged): " << arr2[0] << std::endl;

        // Test assignment operator
        Array<int> arr4;
        arr4 = arr2;
        std::cout << "arr4 size: " << arr4.size() << std::endl;
        arr4[1] = 20;
        std::cout << "arr4[1]: " << arr4[1] << std::endl;
        std::cout << "arr2[1] (should be unchanged): " << arr2[1] << std::endl;

        // Test out-of-bounds access
        std::cout << "Trying to access arr2[10] (should throw exception): " << std::endl;
        std::cout << arr2[4] << std::endl;
        std::cout << arr2.size() << std::endl;

        int * a = new int();
        *a = 42;
        std::cout << *a << std::endl;
        delete a;
        
        //  Array<int> arr5;
        
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
