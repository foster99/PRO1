#include <iostream>
using namespace std;

int main() {

    int k;
    cin >>k;

    // dividimos entre la base hasta que el dividendo = 0
    
    int K, base, count;
    K=k;
    count=0;
    base=2;

    while (base<17) {
        if (k==0) count=1;
        else {
            while (K>0) {
                K/=base;
                ++count;
            }
        }
            cout <<"Base " <<base <<": " <<count <<" cifras." <<endl;
            count=0;
            K=k;
            ++base;
             
    }

return 0;    
}