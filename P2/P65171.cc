#include <iostream>
using namespace std;

int main() {

    cout.setf(ios::fixed);
    cout.precision(2);

    int n;
    cin >>n;

    int i=0;
    double x, a=0, b=0;
    while (i<n) {
        cin >>x;
        a=a+(x*x);
        b=b+x;
        ++i;
    }
    cout <<(double((1.0/(n-1))*a)) - (double(b*b)*(1.0/(n*(n-1)))) <<endl;   
}