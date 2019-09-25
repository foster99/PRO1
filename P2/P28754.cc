#include <iostream>
using namespace std;

int main() {

	int n;
	cin >>n;
	
	int residuo;
	while (n != 0) {
		
		residuo=n%2;
		n=n/2;
		cout <<residuo;
	}
	
	cout <<endl;
	return 0;
}