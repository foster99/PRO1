#include <iostream>
using namespace std;

int main() {
	
	cout.setf(ios::fixed);
	cout.precision(4);
	
	double i, TAE;
	string freq;	//freq: freqüencia de cobrar l'interès (setmanalment, mensualment, etc.)
	
	cin >>i >>freq;
	
	int t;  //t: tiempo traducido de la frecuencia
	if (freq == "setmanal") t=52;
	if (freq == "mensual") t=12;
	if (freq == "trimestral") t=4;
	if (freq == "semestral") t=2;
	
	
	double b;
	b=((i/100)/t)+1;
		

	double x;
	int y;
	
	x=1;
	y=0;
	
	while (y!=t) {
		x=x*b;
		y++;
	}
	
	TAE = 100*(x-1);
	cout << TAE << endl;
} 