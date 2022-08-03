#include <iostream>
#include <iomanip>

using namespace std;

bool sodoixung (string s) {
    int length = s.length();
    for (int i = 0; i <= length/2; i++) {
        if (s[i] != s[length-i-1]) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    while (n != 0) {
        string s;
        cin >> s;
        bool check = sodoixung(s);
        if (check == true) cout << "yes" << endl;
        else cout << "no" << endl;
        n--;
    }
    return 0;
}
