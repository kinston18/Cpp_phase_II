#include <iostream>
using namespace std;

int main() {
    int n=9, i, j, k;

    // loop for the upper half of the kite
    for(i=1; i<=n/2+1; i++) {
        for(j=1; j<=n-i; j++) {
            cout << " ";
        }
        for(k=1; k<=2*i-1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    // loop for the lower half of the kite
    for(i=n/2; i>=1; i--) {
        for(j=1; j<=n-i; j++) {
            cout << " ";
        }
        for(k=1; k<=2*i-1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    // loop for the triangle at the bottom
    for(i=2; i<=n/2-1; i++) {
        for(j=1; j<=n/2-i+5; j++) {
            cout << " ";
        }
        for(k=1; k<=2*i-1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
