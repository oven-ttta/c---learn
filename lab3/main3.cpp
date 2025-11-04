/* LANG : C++ */
#include <iostream>

using namespace std;

int main() {
	int cash, total;
	cin >> cash;
	cin >> total;

	int change = cash - total;

	int count500 = change / 500;
	if (count500 > 0) {
		cout << "500 " << count500 << endl;
	}
	change = change % 500;

	int count100 = change / 100;
	if (count100 > 0) {
		cout << "100 " << count100 << endl;
	}
	change = change % 100;

	int count1 = change;
	if (count1 > 0) {
		cout << "1 " << count1 << endl;
	}

	return 0;
}


