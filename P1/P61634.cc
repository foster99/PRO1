#include <iostream>
using namespace std;

int main() {
	
	double a;
	cin >>a;			//introduce el año
	
	if (a==2000) {
		
		cout <<"YES" <<endl;
		return 0;
	}
	
	double d;		//d: decimal
	int e, residu;			//e: entero	// residu: reseiduo de division
	
	d=a/100;
	e=a/100;
	
	if (d==e) {		// significa que el año termina en 00
	
		residu=e%4;
		if (residu==0) cout <<"YES" <<endl;
		else cout <<"NO" <<endl;
	}
	
	else {			// año no termina en 00
		
		int b;
		b=a;
		
		residu=b%4;	
		if (residu==0) cout <<"YES" <<endl;
		else cout <<"NO" <<endl;
		
	}
	
return 0;
	
}