/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 23:46:43 by mayache-          #+#    #+#             */
/*   Updated: 2025/02/01 11:13:44 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn.hpp"

bool RPN::is_operator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

int RPN::evaluate_rpn(const std::string& expression) {
    
    std::stack<int> operands;

    std::istringstream iss(expression);
    std::string token;
    
    while (iss >> token) {
        // std::cout << token[0] << std::endl;
        if (isdigit(token[0])) {
            std::stringstream ss(token);
        int number;
        ss >> number;
        // std::cout << number << std::endl;
            operands.push(number);
        } else if (is_operator(token[0])) {
            if (operands.size() < 2) {
                std::cerr << "Error: Invalid expression\n";
                return -1;
            }

            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();

            std::cout << operand1 << " " << token[0] << " " << operand2 << std::endl;
            switch (token[0]) {
                case '+':
                    operands.push(operand1 + operand2);
                    break;
                case '-':
                    operands.push(operand1 - operand2);
                    break;
                case '*':
                    operands.push(operand1 * operand2);
                    break;
                case '/':
                    if (operand2 == 0) {
                        std::cerr << "Error: Division by zero\n";
                        return -1;
                    }
                    operands.push(operand1 / operand2);
                    break;
            }
        } else {
            std::cerr << "Error: Invalid token\n";
            return -1;
        }
    }

    if (operands.size() != 1) {
        std::cerr << "Error: Invalid expression\n";
        return -1;
    }

    return operands.top();
}


RPN::RPN()
{
    
}

RPN::RPN(RPN const & src)
{
    *this = src;    
}

RPN::~RPN()
{
    
}
RPN & RPN::operator=(RPN const & src)
{
    (void)src;
    return (*this);
}