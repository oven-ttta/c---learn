#include <iostream>

int main() {
    int n; 

    std::cout << "Enter n (1-20): ";
    std::cin >> n; 

    for (int i = 1; i <= n; ++i) {
        
        if (i % 2 == 1) {
            std::cout << "0";
        } else {
            std::cout << "1";
        }
    }

    std::cout << std::endl;

    return 0;
}