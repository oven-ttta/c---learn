#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    int num[100];
    double sum = 0;
    int maxVal = 0;
    int minVal = 1000;

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
