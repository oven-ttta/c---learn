#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, num[100], maxVal = 0, minVal = 1000;
    double sum = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
        
        sum += num[i];

        if (num[i] > maxVal) {
            maxVal = num[i];
        }
        if (num[i] < minVal) {
            minVal = num[i];
        }
    }

    double avg = sum / n;

    cout << "Avg = " << avg << endl;
    cout << "Max = " << maxVal << endl;
    cout << "Min = " << minVal << endl;

    return 0;
}
