#include <iostream>
using namespace std;

int main() {
    int b, n;
    while (cin >>b >>n) {
        int count=0;
        if (n==0) count=1;
        while (n!=0) {
            n=n/b;
            ++count;
        }

        cout <<count <<endl;
    }
return 0;
}