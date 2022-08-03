#include <iostream>

using namespace std;

int fibonacci(int a) {
    if (a == 0 || a == 1) return a;
    return fibonacci(a - 1) + fibonacci(a - 2);
}

int fibo (int a) {
    if (a == 0 || a == 1) return a;
    int f0 = 0, f1 = 1, fn;
    for (int i = 2; i <= a; i++) {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
    return fn;
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n) << endl << fibo(n) << endl;
    return 0;
}
