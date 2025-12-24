#include <iostream>
#include <string>
using namespace std;

int main() {
    string name[5][5][5];
    int n, m, p;

    // รับขนาดของ array 3 มิติ
    cin >> n >> m >> p;

    // รับค่า string ใส่ array 3 มิติ
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < p; k++) {
                cin >> name[i][j][k];
            }
        }
    }

    // แสดงผลแบบแรก - แสดงทีละ element
    cout << "Elements in the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < p; k++) {
                cout << "name[" << i << "][" << j << "][" << k << "]: " << name[i][j][k] << endl;
            }
        }
    }

    // แสดงผลแบบที่สอง - แสดงรวมตามมิติแรก
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
