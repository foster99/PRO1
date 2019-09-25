#include <iostream>
using namespace std;

int  main() {
    int x, n;
    cin >>x;
    int X= x%1000;
    cout <<"nombres que acaben igual que " <<x <<":" <<endl;
    int count=0;
    while (cin >>n) {
        int N=n%1000;
        if (N==X) {
            cout <<n <<endl;
            ++count;
        }
    }
    cout <<"total: " <<count <<endl;
}