/* Have the function FirstReverse(str) take the str parameter being passed and return the string in reversed order. */

#include <iostream>
#include <algorithm>
using namespace std;

string FirstReverse(string str) {
  
  std::reverse(str.begin(), str.end());
  return str; 
            
}

int main() { 
  
  // keep this function call here
  cout << FirstReverse(gets(stdin));
  return 0;
    
} 