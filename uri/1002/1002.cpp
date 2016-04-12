#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    double raio;

    cin >> raio;
    cout << "A=" << setprecision(4) << fixed << raio * raio * (3.14159) << endl;

    return 0;
}
