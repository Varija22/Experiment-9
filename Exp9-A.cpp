//Varija K
//24070123165

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *aptr = &a;

    int arr[] = {10, 20, 30};
    cout << *arr << endl;  // prints the first element of the array (10)

    int *ptr = arr;
    for (int i = 0; i < 3; i++) {
        cout << *ptr << endl;
        ptr++;  // move pointer to the next array element
    }

    return 0;
}
