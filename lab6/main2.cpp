// LANG # C++ //
#include <iostream>
using namespace std;
int main() {
    int n, i, x;
    cin >> n;
    x = 1;
	while (n < 0 || n > 10) {
        cin >> n;
    }
    for (i = 1; i <= n; i++) {
        x = x * i;
    }
    cout << x << endl;
    return 0;
}
