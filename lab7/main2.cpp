#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num[6];
    int even[6];
    int odd[6];
    
    int e_count = 0;
    int o_count = 0;

    for (int i = 0; i < 6; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < 6; i++) {
        int rem = num[i] % 2;
        if (rem == 0) {
            even[e_count] = num[i];
            e_count++;
        } else {
            odd[o_count] = num[i];
            o_count++;
        }
    }

    cout << "Even =";
    for (int i = 0; i < e_count; i++) {
        cout << " " << even[i];
    }
    cout << endl;

    cout << "Odd =";
    for (int i = 0; i < o_count; i++) {
        cout << " " << odd[i];
    }
    cout << endl;

    return 0;
}
