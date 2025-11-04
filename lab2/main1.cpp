/* LANG : C++ */
#include <iostream>

using namespace std;

int main() {

    int A, B, C, D, E;

    cout << "Enter A: ";
    cin >> A;

    cout << "Enter B: ";
    cin >> B;

    cout << "Enter C: ";
    cin >> C;

    cout << "Enter D: ";
    cin >> D;

    cout << "Enter E: ";
    cin >> E;

    cout << "\n--- Results ---" << endl; 

    cout << "(A+B)*(E-D)=" << (A + B) * (E - D) << endl;
    cout << "++D+C*E=" << ++D + C * E << endl;
    cout << "(25+A)/C+B=" << (25 + A) / C + B << endl;
    cout << "20*C+B+++D/2=" << 20 * C + B++ + D / 2 << endl;
    cout << "--D+C+B--=" << --D + C + B-- << endl;
    cout << "25*D/5+10=" << 25 * D / 5 + 10 << endl;
    cout << "A+B-+D=" << A + B + D << endl;
    cout << "C*2+E*5=" << C * 2 + E * 5 << endl;
    cout << "(A*2)+B/C-15=" << (A * 2) + B / C - 15 << endl;

    return 0;
}
