#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin >>n;

	if (n > 9) {
		int x, y, dig;
		x=n;
		y=n;
		dig= 0;
		
		while ( (x != 0) and (y != 0) ) {
	
		y = x/10;
		x = x/10; 
		++dig;
		}
	
	cout <<"The number of digits of " <<n <<" is " <<dig <<"." <<endl;
	}
	
	else cout <<"The number of digits of " <<n <<" is 1." <<endl;

return 0;

}