/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:39:33 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/21 16:33:44 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

// void replace(const std::string& filename, const std::string& s1, const std::string& s2) {
//     std::ifstream file(filename);
//     if (!file) {
//         std::cerr << "Error: File '" << filename << "' not found." << std::endl;
//         return;
//     }

//     std::string contents;
//     std::string line;
//     while (std::getline(file, line)) {
//         contents += line;
//         contents += '\n';  // Add a newline character after each line if desired
//     }

//     file.close();

//     size_t pos = contents.find(s1);
//     while (pos != std::string::npos) {
//         contents.replace(pos, s1.length(), s2);
//         pos = contents.find(s1, pos + s2.length());
//     }

//     std::ofstream newFile(filename + ".replace");
//     if (!newFile) {
//         std::cerr << "Error: Failed to create the new file." << std::endl;
//         return;
//     }

//     newFile << contents;
//     newFile.close();

//     std::cout << "Replacement successful. New file '" << filename << ".replace' created." << std::endl;
// }

// // Example usage
// int main(int ac, char **av) {

//     if (ac == 4)
//     {
//         std::string filename = av[1];
//         std::string s1 = av[2];
//         std::string s2 = av[3];
//         replace(filename, s1, s2);
//     }
//     return 0;
// }

// Function to replace all occurrences of s1 with s2 in a string
void replaceAll(std::string& str, const std::string& s1, const std::string& s2) {
    size_t pos = 0;
    while ((pos = str.find(s1, pos)) != std::string::npos) {
        str.replace(pos, s1.length(), s2);
        pos += s2.length();
    }
}

// Function to process the file and replace occurrences of s1 with s2
bool replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2) {
    std::ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        std::cerr << "Error: Unable to open input file." << std::endl;
        return false;
    }

    // Create the output file with .replace extension
    std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(outputFilename);
    if (!outputFile.is_open()) {
        std::cerr << "Error: Unable to create or open output file." << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        replaceAll(line, s1, s2);
        outputFile << line << "\n";
    }

    std::cout << "Replacement complete. Result saved in " << outputFilename << std::endl;
    return true;
}

int main(int ac, char** av) {
    if (ac != 4) {
        std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    if (replaceInFile(filename, s1, s2)) {
        return 0;
    } else {
        return 1;
    }
}
