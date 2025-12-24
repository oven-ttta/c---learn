#include <iostream>
using namespace std;

int main() {
    int scores[2][5];
    int sumcolumns[5] = {0};

    // รับค่า scores 2x5
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> scores[i][j];
        }
    }

    // คำนวณผลรวมตามแนวคอลัมน์
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 2; i++) {
            sumcolumns[j] += scores[i][j];
        }
    }

    // แสดงผลลัพธ์
    for (int j = 0; j < 5; j++) {
        if (j > 0) cout << " ";
        cout << sumcolumns[j];
    }
    cout << endl;

    return 0;
}
