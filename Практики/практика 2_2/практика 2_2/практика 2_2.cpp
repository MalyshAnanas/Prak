#include <iostream>
#include "sum.hpp"
#include "mult.hpp"

int main() {
    std::string a;
    std::string b;
    std::cin >> a;
    std::cin >> b;
    std::cout << sum::sm(a, b) << std::endl;
    std::cout << mult::mlt(a, b);
}
