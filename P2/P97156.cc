#include <iostream>
using namespace std;

int main() {
    
    int x, y;
    cin >>x >>y;
    
    if (x==y) {
        cout <<x <<endl;
        return 0;
    }
    
    if (x>y) {
        cout <<endl;
        return 0;
    }    
    
    if (x<y) {

        while (x!=y) {
            cout <<x <<",";
            ++x;
        }
    
        cout <<y <<endl;
    
    }
    
return 0;
}
