#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin >>n;
	
	int x0, x1, x2;
	x0= n%10;
	x1= (n%100)/10;
	x2= (n%1000)/100;
	
	int X=x0+x1+x2;
	cout <<X <<endl;
	
	return 0;
}