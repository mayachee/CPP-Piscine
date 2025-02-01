/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 11:04:24 by mayache-          #+#    #+#             */
/*   Updated: 2025/02/01 11:12:52 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <sstream>

class RPN {
    public:
        bool is_operator(char c);
        int evaluate_rpn(const std::string& expression);
        
        RPN();
        RPN(RPN const & src);
        ~RPN();
        RPN & operator=(RPN const & src);
};