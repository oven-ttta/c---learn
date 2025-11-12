#include <iostream>
#include <climits> 

int main() {
    int n, x; 
    int sum = 0; 
    int max = INT_MIN; 

    std::cout << "Enter n: ";
    std::cin >> n; 

    std::cout << "Enter " << n << " numbers: " << std::endl;
    
    for (int i = 0; i < n; ++i) {
        std::cin >> x;

        sum = sum + x; 

        if (x > max) {
            max = x;
        }
    }

    std::cout << "Sum = " << sum << std::endl;
    std::cout << "Max = " << max << std::endl;

    return 0;
}