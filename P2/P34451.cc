#include <iostream>
using namespace std;

int main() {

    int x;
    cin >>x;
    
    int n, count=0;
    while (cin >>n) {
        if (n%x==0) ++count;
    }
    cout <<count <<endl;
}