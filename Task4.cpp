#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int countWords(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cout << "File not found." << std::endl;
        return 0;
    }

    int wordCount = 0;
    std::string line;
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string word;
        while (ss >> word) {
            ++wordCount;
        }
    }

    return wordCount;
}

int main() {
    std::string filename;
    std::cout << "Enter the name of the text file: ";
    std::cin >> filename;

    int wordCount = countWords(filename);
    std::cout << "Total number of words in the file: " << wordCount << std::endl;

    return 0;
}
