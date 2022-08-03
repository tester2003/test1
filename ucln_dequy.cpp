#include <iostream>
#include <cmath>

using namespace std;

int ucln(int a, int b) {
    a = abs(a);
    b = abs(b);
    if (a == b) {
        return a;
    }
    if (a > b) {
        return ucln(a - b, b);
    }
    else {
        return ucln(a, b - a);
    }
}

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    if (a*b == 0) return a+b;
    if (a > b) return gcd(a%b, b);
    else return gcd(a, b%a);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << ucln(a, b) << endl << gcd(a, b);
    return 0;
}
