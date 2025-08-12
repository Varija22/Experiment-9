// Varija K
// 24070123165
#include <iostream>
using namespace std;

int main() {
    int* ptr, b = 10;
    ptr = &b;
    cout << *ptr << "    " << b << endl << ptr << "    " << &b << endl;
    ptr++;
    cout << "After increment: " << ptr << endl;

    float* n, a = 8.923;
    n = &a;
    cout << endl << *n << "    " << a << endl << n << "    " << &a << endl;
    n++;
    cout << "After increment: " << n << endl;

    char* ch, c = '#';
    ch = &c;
    cout << endl << (void*)ch << endl;
    ch++;
    cout << "After increment: " << (void*)ch << endl;

    return 0;
}
