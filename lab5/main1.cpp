#include <iostream>

using namespace std;

int main() {
    int row;
    char sign;

    cout << "";
    cin >> row;
    cout << "";
    cin >> sign;
    for (int i = row; i >= 1; --i) {
        
        for (int j = 1; j <= i; ++j) {
            cout << sign; 
        }
        
        cout << endl;
    }

    return 0;
}