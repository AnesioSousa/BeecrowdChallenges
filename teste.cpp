#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::vector<std::string> tokenizeString(const std::string& input) {
    std::vector<std::string> tokens;
    std::istringstream iss(input);
    std::string token;

    while (std::getline(iss, token, ' ')) {
        tokens.push_back(token);
    }

    return tokens;
}

int main() {
    std::string longString = "This is a long string that needs to be tokenized";
    std::vector<std::string> tokens = tokenizeString(longString);

    // Print the tokens
    for (const auto& token : tokens) {
        std::cout << token << std::endl;
    }

    return 0;
}
