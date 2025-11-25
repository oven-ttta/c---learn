// LANG # C++ //
#include <iostream>
using namespace std;

int main() {
    int n, i, max, min;
    
    max = 10;
    min = 10;
    
    for (i = 0; i < 10; i++) {
        cin >> n;
        
        if (n == 0) {
            break;
        }
        
        if (n > 10 && n < 20) {
            max++;
        }
    }
    
    cout << (max - min) << endl;
    
    return 0;
}
