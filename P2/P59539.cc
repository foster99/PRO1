#include <iostream>
using namespace std;

int main() {
    
    cout.setf(ios::fixed);
    cout.precision(4);
    
    double n;
    cin >>n;
    
    if (n==0) {
        
        cout <<n <<endl;
    
    return 0;
    }
    
    double H, x;
    H=0;
    x=1;
    
    while (n!=x) {

        H=H+(1/x);
        ++x;
    }
    
    H=H+(1/n);
    
    cout <<H <<endl;
    
    return 0;
    
}
