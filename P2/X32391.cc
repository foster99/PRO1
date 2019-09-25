#include <iostream>
using namespace std;

int  main() {
    int d, n, t;
    cin >>d >>n >>t;
    int a, total=n, count=0;
    for (int i=0; i<t; ++i) {
        cin >>a;
        total=total+a-d;
        if (total>0) ++count;        
    }
    cout <<count <<endl;
}