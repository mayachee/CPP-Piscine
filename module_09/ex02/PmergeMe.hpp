/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 11:26:06 by mayache-          #+#    #+#             */
/*   Updated: 2025/02/01 11:49:48 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib> // for atoi and exit
#include <ctime>   // for clock_t and clock
#include <climits>

class PmergeMe {
    public:

        std::vector<int> mergeInsertionSortVector(const std::vector<int>& arr);
        std::deque<int> mergeInsertionSortDeque(const std::deque<int>& arr);
        std::vector<int> parseArguments(int argc, char* argv[]);
        int myStoi(const std::string& str);
        std::vector<int> generateJacobsthal(int maxNeeded);

        PmergeMe();
        PmergeMe(PmergeMe const & src);
        ~PmergeMe();
        PmergeMe & operator=(PmergeMe const & src);

        template <typename Container>
        int binarySearch(const Container& arr, int target) {
            int low = 0;
            int high = arr.size() - 1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (arr[mid] < target) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
            return low;
        }
};