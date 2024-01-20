#include <iostream>
#include <string>

std::string reverseString(const std::string &str) {
    // TODO: Implement the reverseString function
    std::string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

int main() {
    // TODO: Implement the main method
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    std::cout << "The reversed string is: " << reverseString(str) << std::endl;
    return 0;
    
}

