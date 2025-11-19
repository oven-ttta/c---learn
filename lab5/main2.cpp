#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n, x;
    int sum = 0;
    int max = INT_MIN;

    cout << "";
    cin >> n;

    cout << "";
    
    for (int i = 0; i < n; ++i) {
        cin >> x;

        sum = sum + x;

        if (x > max) {
            max = x;
        }
    }

    cout << "Sum = " << sum << endl;
    cout << "Max = " << max << endl;

    return 0;
}