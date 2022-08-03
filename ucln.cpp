#include <iostream>
#include <cmath>

using namespace std;

int ucln(int a, int b) {
    int c = abs(a);
    int d = abs(b);
    while (c*d != 0) {
        if (c > d) {
            c = c % d;
        }
        else {
            d = d % c;
        }
    }
    return c + d;
}

int main() {
    int a, b;
    cin >> a >> b;
    int gcd = ucln(a, b);
    cout << gcd;
    return 0;
}
