// LANG # C++ //
#include <iostream>
using namespace std;

int main() {
    int n = 0 , i = 0, max=-1, min=100, range;
    
   while (i < 10) {
   	
   	do {
   	cin >> n ;
   } while ((n < 10 && n != 0)||(n > 20));
    
   if (n == 0){
   		break;
   }
   if (max < n){
   		max = n;
   }
   if(min > n){
   min = n;
   }
    i++;
}
	range = max - min;
	cout << range;
	
    return 0;
}
