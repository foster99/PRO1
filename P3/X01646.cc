#include <iostream>
using namespace std;

int main() {
    int b, n;
    cin >>b;
    
    while (cin >>n) {
        int N=n;
        int residu=0;

        while (n!=0) {
            residu=residu+(n%b);
            n=n/b;
        }

        residu=residu+(n%b);
        cout <<N <<": " <<residu <<endl;
    }

}