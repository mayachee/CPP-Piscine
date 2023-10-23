/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:39:33 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/23 17:02:05 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

// Function to replace every occurrence of s1 with s2 in a given string
std::string replaceAll(std::string source,const std::string& s1,const std::string& s2) {
    size_t pos = source.find(s1);
    while (pos != std::string::npos) {
        source.erase(pos, s1.length());
        source.insert(pos, s2);
        pos = source.find(s1);
    }
    return source;
}

int main(int ac, char *av[]) {
    if (ac != 4) {
        std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    // Open the input file for reading
    std::ifstream inFile(filename);
    if (!inFile.is_open()) {
        std::cerr << "Error: Unable to open the input file." << std::endl;
        return 1;
    }

    // Create the output file with ".replace" appended to the filename
    std::string outFilename = filename + ".replace";
    std::ofstream outFile(outFilename);

    if (!outFile.is_open()) {
        std::cerr << "Error: Unable to create the output file." << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inFile, line)) {
        // Replace all occurrences of s1 with s2 in the current line
        line = replaceAll(line, s1, s2);

        // Write the modified line to the output file
        outFile << line << std::endl;
    }

    std::cout << "Replacement completed. Output written to " << outFilename << std::endl;

    // Close the input and output files
    inFile.close();
    outFile.close();

    return 0;
}
