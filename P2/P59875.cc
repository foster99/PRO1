#include <iostream>
using namespace std;

int main() {
    
    int x, y;
    cin >>x >>y;
    
    if (x==y) {
        cout <<x <<endl;
        return 0;
    }
    
    int a, b;
    
        a=x;
        b=y;
        
        if (a<b) {
        a=y;
        b=x;
        }
    
    
    int A, i;
    i=0;  
    A=a;
    
    while (A!=b) {
        A=a-i;
        cout <<A <<endl;
        ++i;
    }
}
