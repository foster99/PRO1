#include <iostream>
using namespace std;

int  main() {
    int Y, M, D, k, x, b, c, q, p, y, z, n, e;
    while (cin >>Y) {
    
        k=Y/100;
        x=Y%19;
        b=Y%4;
        c=Y%7;
        q=k/4;
        p=(13+8*k)/25;
        y=(15-p+k-q)%30;
        z=((19*x)+y)%30;
        n=(4+k-q)%7;
        e=((2*b)+(4*c)+(6*z)+n)%7;

        if ((z+e)<=9) {
            D=22+z+e;
            M=3;
        }
        else if ((z==29) and (e==6)) {
            D=19;
            M=4;
        }
        else if ((z==28) and (e==6) and (x>10)) {
            D=18;
            M=4;
        }
        else {
            D=z+e-9;
            M=4;
        }

        cout <<D <<'/' <<M <<endl;
    }
}