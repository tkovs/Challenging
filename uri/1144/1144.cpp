#include <iostream>
 
using namespace std;
 
int main() {
    int bb = 2;
    int a = 1, b = 1, c = 1;
    int n, i;
    
    cin >> n;

    for (i = 1; i <= n; i++) {
        cout << a << " " << b++ << " " << c++ << endl;
        cout << a++ << " " << b << " " << c << endl;
        
        b += bb;
        bb += 2;
        c = a * b;
    }

    return 0;
}
