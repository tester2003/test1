#include <iostream>

 using namespace std;

 long long factorial(unsigned int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    return n*factorial(n - 1);
}

int main() {
    int n;
    cin >> n;
    long long gt = factorial(n);
    cout << gt;
    return 0;
}
