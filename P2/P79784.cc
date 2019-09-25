#include <iostream>
using namespace std;

int  main() {
    char a;
    int x=0, y=0;
    while (cin >>a) {
        if (a=='e') x+=1;
        if (a=='w') x-=1;
        if (a=='s') y+=1;
        if (a=='n') y-=1;
    }
    cout <<'(' <<x <<", " <<y <<')' <<endl;
}