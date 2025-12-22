#include <iostream>
#include <string>
int main() {
    std::string s;
    std::cin >> s;
    int eCount = s.length() - 2;
    std::cout << "h";
    for (int i = 0; i < eCount * 2; i++)
        std::cout << "e";
    std::cout << "y" << std::endl;
}