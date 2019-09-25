#include <iostream>
using namespace std;

int main() {
	
	int h, m, s;
	cin >>h >>m >>s;
	
	if (s==59) {	
		s=0;
		++m;
		if (m==60) {
			m=0;
			++h;
			if (h==24) h=0;
		}
	}
	
	else ++s;
	
	if (h<10) cout <<"0" <<h;
	else cout <<h;
	
	cout <<":";
	
	if (m<10) cout <<"0" <<m ;
	else cout <<m;
	
	cout <<":";
	
	if (s<10) cout <<"0" <<s <<endl; 
	else cout <<s <<endl;
	
return 0;
}