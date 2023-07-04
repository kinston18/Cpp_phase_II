#include <iostream>
using namespace std;

int main() {
    // Bitwise AND operation
    int a = 5;   
    int b = 3;   
    int c = a & b;  
    cout << "Bitwise AND: " << c << endl;

    // Bitwise OR operation
    int d = a | b;   
    cout << "Bitwise OR: " << d << endl;

    // Bitwise XOR operation
    int e = a ^ b;   
    cout << "Bitwise XOR: " << e << endl;

    // Bitwise NOT operation
    int f = ~a;   
    cout << "Bitwise NOT: " << f << endl;

    // Bitwise left shift operation
    int g = a << 2;  
    cout << "Bitwise left shift: " << g << endl;

    // Bitwise right shift operation
    int h = a >> 1;  
    cout << "Bitwise right shift: " << h << endl;

    return 0;
}
