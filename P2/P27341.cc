#include <iostream>
using namespace std;

int  main() {
    int min, max;
    while (cin >>min >>max) {
        int suma=0, paso=min, i=0;
        while (paso<=max) {
            suma = suma + (paso*paso*paso);
            ++i;
            paso = min+i;
        }

        cout <<"suma dels cubs entre " <<min <<" i " <<max <<": " <<suma <<endl;
    }
}