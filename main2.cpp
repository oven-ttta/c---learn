#include <iostream>
#include <cmath> 
#include <iomanip> 

using namespace std;

int main() {

    float r, sqArea, crArea, area;

    cin >> r;

    sqArea = (2 * r) * (2 * r);
    crArea = M_PI * r * r;
    area = sqArea - crArea;

    cout << "Area: " << fixed << setprecision(2) << area << endl;

    return 0;
}
