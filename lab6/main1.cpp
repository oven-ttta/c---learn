// LANG # C++ //
#include <iostream>
using namespace std;

int main() {
    char ch, mychar;
    int count = 0;
    
    cin >> ch;
    
    do {
        cin >> mychar;
        count++;
    } while (mychar != ch);
    
    cout << count << endl;
    
    return 0;
}