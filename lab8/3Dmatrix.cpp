#include <iostream>
#include <string>
using namespace std;

int main() {
    string name[5][5][5];
    int n, m, p;

    cin >> n >> m >> p;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < p; k++) {
                cin >> name[i][j][k];
            }
        }
    }

    cout << "Elements in the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < p; k++) {
                cout << "name[" << i << "][" << j << "][" << k << "]: " << name[i][j][k] << endl;
            }
        }
    }
    cout<< "\n";
    cout << "Elements in the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "name[" << i << "][][]:";
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < p; k++) {
                cout << " " << name[i][j][k];
            }
        }
        cout << endl;
    }

    return 0;
}
