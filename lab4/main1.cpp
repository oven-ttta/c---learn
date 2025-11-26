#include <iostream>
using namespace std;

int main(void) {
    char ch;
    cout << "";
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
