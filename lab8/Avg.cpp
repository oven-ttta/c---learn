#include <iostream>
using namespace std;

int main() {
    int matrix1[5][5], matrix2[5][5];
    int n, m;
    float avg;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix1[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            avg = (float)(matrix1[i][j] + matrix2[i][j]) / 2;
            if (j > 0) cout << " ";
            cout << avg;
        }
        cout << endl;
    }

    return 0;
}
