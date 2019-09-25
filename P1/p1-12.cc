#include <iostream>
using namespace std;

int main() {
	
	int y, d, h, m, s;
	cin >>y >>d >>h >>m >>s;
	cout <<(s+60*m+3600*h+3600*24*d+3600*24*365*y) <<endl;
}