#include <iostream>

using namespace std;
void problem2() {
    double num1, num2; 
    char mark;
    
    cout << "--- โจทย์ข้อ 2: คำนวณเลข ---" << endl;
    cout << "ป้อนเลขจำนวนจริงตัวที่ 1: ";
    cin >> num1;
    cout << "ป้อนเลขจำนวนจริงตัวที่ 2: ";
    cin >> num2;
    cout << "ป้อนเครื่องหมาย (+, -, *, /, >): ";
    cin >> mark;

    switch (mark) {
        case '+':
            cout << "ผลลัพธ์: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "ผลลัพธ์: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "ผลลัพธ์: " << num1 * num2 << endl;
            break;
        case '/':
            cout << "ผลลัพธ์: " << num1 / num2 << endl;
            break;
        case '>':
            cout << "ออกจากโปรแกรม" << endl;
            break;
        default:
            cout << "Invalid mark!!" << endl;
            break;
    }
}