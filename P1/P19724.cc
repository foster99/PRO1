#include <iostream>
using namespace std;
 
int campanades(int h, int m) {
        if (m == 16) return 1;
        if (m == 31) return 2;
        if (m == 46) return 3;
        if (m == 1) {
                if (h == 12) return 104;
                if (h == 0) return 16;
                return h%12 + 4;
        }
        return 0;
}
 
void incr_rellotge(int&h, int&m) {
        ++m;
        if (m >= 60) {
                m = 0;
                ++h;
                if (h == 24) h = 0;
        }
}
 
int main() {
        int h, m, t;
        while (cin >> h >> m >> t) {
                int dies = t/1440;
                int min = t%1440;
                int suma = dies*484;
                for (int i = 0; i < min; ++i) {
                        incr_rellotge(h, m);
                        suma += campanades(h, m);
                }
                cout << suma << endl;
        }
}