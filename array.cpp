#include <iostream>

using namespace std;

int main() {
    int A[5];
    A[0] = 12;
    A[1] = 10;
    A[2] = 15;

    cout << sizeof(A) << endl;
    cout << A[1];
    return 0;
}