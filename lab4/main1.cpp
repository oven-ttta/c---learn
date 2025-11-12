#include <iostream>

using namespace std;
void problem1() {
    char ch;
    cout << "--- โจทย์ข้อ 1: ตรวจสอบตัวอักษร ---" << endl;
    cout << "ป้อนอักขระ 1 ตัว: ";
    cin >> ch;

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "Vowel" << endl;
            break;
        default:
            cout << "Consonant" << endl;
            break;
    }
}