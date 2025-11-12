#include <iostream>

int main() {
    int row; 
    char sign; 

    std::cout << "Enter number of rows: ";
    std::cin >> row; 
    std::cout << "Enter character: ";
    std::cin >> sign; 

    for (int i = row; i >= 1; --i) {
        
        for (int j = 1; j <= i; ++j) {
            std::cout << sign; 
        }
        
        std::cout << std::endl;
    }

    return 0; 
}