#include <iostream>
using namespace std;

int main() {
    int seriesA[20];
    seriesA[0] = 8;
    seriesA[1] = 9;

    int counterB = 42;

    cout << "Series A: ";
    for (int i = 2; i < 20; i++) {
        if (i % 2 == 0) {
            seriesA[i] = 8;
        }
        else {
            seriesA[i] = seriesA[i-2] + 2;
        }
        cout << seriesA[i] << " ";
    }
    cout << endl;

    cout << "Series B: ";
    for (int i = 1; i <= 20; i++) {
        cout << counterB << " ";
        counterB -= (i % 3 == 0) ? 3 : 2;
    }
    cout << endl;

    return 0;
}
