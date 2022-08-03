// tan suat xuat hien cac so trong mang chi co so duong

#include <iostream>

using namespace std;

void nhap_mang(int a[], int n);
void tan_suat(int a[], const int &n);

int main()
{
    int n;
    cin >> n;
    int a[n];

    nhap_mang(a, n);
    tan_suat(a, n);
    return 0;
}

void nhap_mang(int a[], int n) {
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void tan_suat(int a[], const int &n) {
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != -1) {
            int dem = 1;
            for (int j = i + 1; j < n; j++) {
                if (a[j] == a[i]) {
                    dem ++;
                    a[j] = -1;
                }
            }
            cout << a[i] << ' ' << dem << endl;
        }
    }
}
