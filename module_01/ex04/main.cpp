/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:39:33 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/19 19:39:34 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void replace(const std::string& filename, const std::string& s1, const std::string& s2) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error: File '" << filename << "' not found." << std::endl;
        return;
    }

    std::string contents;
    std::string line;
    while (std::getline(file, line)) {
        contents += line;
        contents += '\n';  // Add a newline character after each line if desired
    }

    file.close();

    size_t pos = contents.find(s1);
    while (pos != std::string::npos) {
        contents.replace(pos, s1.length(), s2);
        pos = contents.find(s1, pos + s2.length());
    }

    std::ofstream newFile(filename + ".replace");
    if (!newFile) {
        std::cerr << "Error: Failed to create the new file." << std::endl;
        return;
    }

    newFile << contents;
    newFile.close();

    std::cout << "Replacement successful. New file '" << filename << ".replace' created." << std::endl;
}

// Example usage
int main(int ac, char **av) {

    if (ac == 4)
    {
        std::string filename = av[1];
        std::string s1 = av[2];
        std::string s2 = av[3];
        replace(filename, s1, s2);
    }
    return 0;
}
