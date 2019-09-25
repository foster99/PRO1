#include <iostream>
using namespace std;

int main() {

    cout.setf(ios::fixed);
    cout.precision(4);

    double c, i;
    int t;
    string tipo;
    cin >>c >>i >>t >>tipo;
    i=i/100;
    double capital;
    if ((tipo=="simple") or (t==1)) capital = c*(1 + t*i);
    else if (tipo=="compound") {
        int n=0;
        double pot=1;
        while (n<t) {
            pot=pot*(i+1);
            ++n;
        }
        capital = c*pot;
    }
    cout <<capital <<endl;    
}