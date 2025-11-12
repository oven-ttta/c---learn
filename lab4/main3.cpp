#include <iostream>

using namespace std;
void problem3() {
    int a, b, c;
    
    cout << "--- โจทย์ข้อ 3: ตรวจสอบสามเหลี่ยม ---" << endl;
    cout << "ป้อนความยาวด้านที่ 1 (a): ";
    cin >> a;
    cout << "ป้อนความยาวด้านที่ 2 (b): ";
    cin >> b;
    cout << "ป้อนความยาวด้านที่ 3 (c): ";
    cin >> c;

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        
        if (a == b && b == c) {
            cout << "Equilateral" << endl;
        } else if (a == b || a == c || b == c) {
            cout << "Isosceles" << endl;
        } else {
            cout << "Scalene" << endl;
        }

    } else {
        cout << "No" << endl;
    }
}

int main() {
    int choice;
    cout << "เลือกโจทย์ที่ต้องการรัน (1, 2, หรือ 3): ";
    cin >> choice;

    if (choice == 1) {
        problem1();
    } else if (choice == 2) {
        problem2();
    } else if (choice == 3) {
        problem3();
    } else {
        cout << "ตัวเลือกไม่ถูกต้อง" << endl;
    }

    return 0;
}