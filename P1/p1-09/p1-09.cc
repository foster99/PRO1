#include <iostream>
using namespace std;

int main(){
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int max, min, x, y;
    
      if (a <= c) min = a;
      else if (c <= a) min = c;
        
      if (b >= d) max = b;
      else if (d >= b) max = d;
      
      if ((min <= a) and ((a!=min or a==c))) x = a;  
      else if ((min <= c) and ((c!=min or c==a))) x = c;
              
      if ((b <= max) and ((b!=max or b==d))) y = b;       
      else if ((d <= max) and ((d!=max or d==b))) y = d;
 
      if (((a >= d) or (b <= c)) and ((a != d) and (b != c))) cout << "[]" << endl;
      else cout << "[" << x << "," << y << "]" << endl;     
 return 0;    
 
 }
 
