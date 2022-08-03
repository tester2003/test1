#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int a) {
    int can = sqrt(a);
    for (int i = 2; i <= can; i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if(is_prime(i) == true) {
            cout << i << " ";
        }
    }
    return 0;
}
