#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int isValidID(string id) {
    // 1. Check length
    if (id.length() != 8) {
        return 0;
    }

    // 2. Check first character (Degree Level)
    char c1 = id[0];
    if (c1 != 'B' && c1 != 'b' && 
        c1 != 'M' && c1 != 'm' && 
        c1 != 'D' && c1 != 'd') {
        return 0;
    }

    // 3. Check Checksum
    // Digits are at indices 1 to 7 (C2 to C8)
    // Formula uses C2 to C7 to calculate C8
    // Parse C2 to C7 as integers
    
    // Helper to check if characters are digits
    for (int i = 1; i < 8; ++i) {
        if (!isdigit(id[i])) return 0;
    }

    int c2 = id[1] - '0';
    int c3 = id[2] - '0';
    int c4 = id[3] - '0';
    int c5 = id[4] - '0';
    int c6 = id[5] - '0';
    int c7 = id[6] - '0';
    int c8_actual = id[7] - '0';

    int checksum_calc = (c2 * 49 + c3 * 7 + c4 * 49 + c5 * 7 + c6 * 49 + c7 * 7) % 10;

    if (c8_actual != checksum_calc) {
        return 0;
    }

    return 1;
}

int main()
{
    string id[3];
    for (int i=0; i<3; i++) {
        cin >> id[i];
        if (isValidID(id[i])) {
            cout << "valid" << endl;
        } else {
            cout << "invalid" << endl;
        }
    }
    return 0;
}
