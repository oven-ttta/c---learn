#include <iostream>

using namespace std;

int main(){
	int a, b, c;
	
	cin >> a;
	cin >> b;
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
    return 0;
}
