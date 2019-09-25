#include <iostream>
using namespace std;

int main() {

int dia, mes, a;
    while (cin >>dia >>mes >>a) {			//introduce el año
    
        double d;		//d: decimal
        int e, residu, TIPO;			//e: entero	// residu: reseiduo de division
        d=a/100.0;
        e=a/100;
        if (a==2000) TIPO=1;
        else if (d==e) {		// significa que el año termina en 00
            residu=e%4;
            if (residu==0) TIPO=1;
            else TIPO=0;
        }
        else {			// año no termina en 00
            int b=a;
            residu=b%4;	
            if (residu==0) TIPO=1;
            else TIPO=0;
        }
        
        int fecha;
        if ((1<=mes) and (mes<=12)) {
            if ((mes==1) or (mes==3) or (mes==5) or (mes==7) or (mes==8) or (mes==10) or (mes==12)) {
                if ((1<=dia) and (dia<=31)) fecha=1;
                else fecha=0;
            }
            
            if ((mes==4) or (mes==6) or (mes==9) or (mes==11)) {
                if ((1<=dia) and (dia<=30)) fecha=1;
                else fecha=0;
            }

            if (mes==2) {
                if (TIPO==0) {
                    if ((1<=dia) and (dia<=28)) fecha=1;
                    else fecha=0;
                }
                if (TIPO==1) {
                    if ((1<=dia) and (dia<=29)) fecha=1;
                    else fecha=0;
                }
            }
        }
        else fecha=0;
        
        if (fecha == 1) cout <<"Correct Date" <<endl;
        else cout <<"Incorrect Date" <<endl;

    }

return 0;        
}