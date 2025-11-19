#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        
        if (i % 2 == 1) {
            cout << "0";
        } else {
            cout << "1";
        }
    }

    cout << endl;

    return 0;
}