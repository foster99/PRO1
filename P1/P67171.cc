#include <iostream>
using namespace std;

int main() {
	
	int h, m;
	while (cin >>h >>m) {
	
	int min, camp;
	if (h==0) {
		
		if (m!=0) {
			min=60-m;
			camp=1;
		}
		
		else {
			min=0;
			camp=12;
		}
	}
	
	else if (h>12) {
		if (m!=0) {
			min=60-m;
			camp=(h-12)+1;;
		}		
		else {
			min=0;
			camp=h;
		}
	}
	
	else {
		if (m!=0) {
			min=60-m;
			camp=h+1;;
		}
		else {
			min=0;
			camp=h;
		}
	}
	
	camp=camp+(min/15);
	
	cout <<min <<" " <<camp <<endl;
}
}