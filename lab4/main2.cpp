#include <iostream>

using namespace std;
int main(void) {
    int num1, num2; 
    char mark;
    
    cin >> num1;
    cin >> num2;
    cin >> mark;

    switch (mark) {
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            cout << num1 / num2 << endl;
            break;
        case '>':
            cout << endl;
            break;
        default:
            cout << "Invalid mark!!" << endl;
            break;
    }
}
