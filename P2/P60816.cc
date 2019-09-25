#include <iostream>
using namespace std;

int main() {

	int n;
	cin >>n;
	
	if (n==0) {
		
		cout <<n <<endl;
		return 0;
	}
	
	int residuo;
	while (n != 0) {
		
		residuo=n%16;
		n=n/16;
		
		if (residuo<10) cout <<residuo;
		if (residuo==10) cout <<"A";
		if (residuo==11) cout <<"B";
		if (residuo==12) cout <<"C";
		if (residuo==13) cout <<"D";
		if (residuo==14) cout <<"E";
		if (residuo==15) cout <<"F";
		
	}
	
	cout <<endl;
	return 0;
}