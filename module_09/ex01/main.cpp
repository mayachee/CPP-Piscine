/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:40:06 by mayache-          #+#    #+#             */
/*   Updated: 2025/01/29 17:25:21 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <sstream>

bool is_operator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

int evaluate_rpn(const std::string& expression) {
    std::stack<int> operands;

    std::istringstream iss(expression);
    std::string token;
    
    while (iss >> token) {
        if (isdigit(token[0])) {
        std::stringstream ss(token);
        int number;
        ss >> number;
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

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <RPN expression>\n";
        return 1;
    }

    std::string expression = argv[1];
    int result = evaluate_rpn(expression);

    if (result != -1) {
        std::cout << result << std::endl;
    }

    return 0;
}