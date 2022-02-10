#include <iostream>

using namespace std;

int main() {
    int n;
    cout<<"enter Size: ";
    cin>>n;
    int A[n];
    A[0] = 2;

    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<A[i]<<endl;
    // }
    for (int x:A) {
        cout<<x<<endl;
    }

    return 0;
}