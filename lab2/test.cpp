/* LANG : C++ */
#include <iostream>

using namespace std;

int main () {
    int sum=0,n=1;

    sum += n;
    sum += n++;
    sum += ++n;
    sum += n;
    n += sum;

    cout << "sum=" << sum << endl << "n=" << n;
}