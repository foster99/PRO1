#include <iostream>
using namespace std;

int main() {

    int n;
    cin >>n;

    int K=n;

    while (K!=0) {
        int i=1;
        while (i!=K) {
            cout <<'+';
            ++i;
        }
        
        cout <<'/';
        
        int j=n;
        while (j!=K) {
            cout <<'*';
            --j;
        }

        cout <<endl;
        K--;
    }
}