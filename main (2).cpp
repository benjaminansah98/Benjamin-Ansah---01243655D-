# include <iostream>

# include <string>

int countVowels(const std::string& str) {

    int count = 0;

    for (char c : str) {

        c = std::tolower(c); // Convert to lowercase for case-insensitive counting

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {

            count++;

        }

    }

    return count;

}

int main() {

    std::string inputString;

    std::cout << "Enter a string: ";

    std::getline(std::cin, inputString); // Use getline to handle spaces in input

    int vowelCount = countVowels(inputString);

    std::cout << "Number of vowels: " << vowelCount << std::endl;

    return 0;

}