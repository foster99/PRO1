#include <iostream>
using namespace std;

int main() {

    int a, b, pot;
    while (cin >>a >>b) {
        pot=a;
        if (b!=0) {
            int i=1;
            while (i<b) {
                pot=pot*a;
                ++i;
            }
        }
        else pot=1;

        cout <<pot <<endl;
    }

return 0;
}