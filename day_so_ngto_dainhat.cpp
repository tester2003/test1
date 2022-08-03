#include <iostream>

using namespace std;
void Eratosthen(bool a[], int N);
void in_day_khongNT(bool a[], int N);

int main() {
    int N;
    cin >> N;

    bool a[N+1];
    for (int i = 0; i <= N; i++) {
        a[i] = true;
    }
    Eratosthen(a, N);
    in_day_khongNT(a, N);

    return 0;
}

void Eratosthen(bool a[], int N) {
    for (int i = 2; i<=N; i++) {
        if (a[i]) {
            //cout << a[i] << ' ';
            for (int j = i+i; j <= N; j+= i)
                a[j] = false;
        }
    }
    //for (int i = 2; i < N+1; i++)
    //   cout << a[i] << ' ';
}
void in_day_khongNT(bool a[], int N) {
    int vt = 0;
    int len_max = 0;
    for (int i = 2; i <= N;) {
        int _vt = i;
        int _len = 0;
        while (i <= N && a[i] == false) {
            _len++;
            i++;
        }
        if (_len > len_max) {
            vt = _vt;
            len_max = _len;
        }
        i++;
    }
    for (int i = vt; i < vt+len_max; i++)
        cout << i << ' ';
}
