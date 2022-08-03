#include <iostream>
#include <algorithm>

using namespace std;

void printArrow(int n, bool left) {
    if (left) {
        for (int hang = n-1; hang >= -(n-1); hang--) {
            for (int cach = 1; cach <= abs (hang); cach++) 
                cout << " ";
            for (int sao = 0; sao <= abs (hang); sao++) 
                cout << "*";
            cout << endl;
        }
    }
    else {
        for (int hang = n-1; hang >= -(n-1); hang--) {
            for (int cach = 0; cach < (n-1-abs(hang)); cach++) 
                cout << " ";
            for (int sao = 0; sao <= abs(hang); sao++)
                cout << "*";
            cout << endl;
        }
    }
}