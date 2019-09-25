#include <iostream>
using namespace std;

// input: intrroduce letra mayus o minus
// output: programa dice si es vocal o consonante y si esta maysucula o minuscula

int main() {
	
	char x;
	cin >> x;
	
	if (x=='a' or x=='e' or x=='i' or x=='o' or x=='u') cout <<"lowercase" <<endl <<"vowel"	<<endl;
	else if (x=='A' or x=='E' or x=='I' or x=='O' or x=='U') cout <<"uppercase" <<endl <<"vowel" <<endl;
	else if (x>='a' and x<='z') cout <<"lowercase" <<endl <<"consonant" <<endl;
	else if (x>='A' and x<='Z') cout <<"uppercase" <<endl <<"consonant" <<endl;
	
}