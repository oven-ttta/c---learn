// LANG # C++ //
#include <iostream>
using namespace std;

int main() {
    int n, i, x;
    
    cin >> n;
    
    while (n < 0 || n > 10) {
        cin >> n;
    }
    
    x = 1;
    for (i = 1; i <= n; i++) {
        x = x * i;
    }
    
    cout << x << endl;
    
    return 0;
}