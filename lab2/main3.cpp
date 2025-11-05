/* LANG : C++ */
#include <iostream>

using namespace std;

int main() {

    int num;
    int a, b, c, d;

    cout << "";
    cin >> num; 

    a = num / 1000; 
    b = (num / 100) % 10; 
    c = (num / 10) % 10;  
    d = num % 10; 

    int sum = a + b + c + d;

    cout << a << "+" << b << "+" << c << "+" << d << " = " << sum << endl;

    return 0;
}
