/*  Have the function FirstFactorial(num) take the num parameter being passed and return the factorial of it (ie. if num = 4, return (4 * 3 * 2 * 1)). */

#include <iostream>
using namespace std;

int FirstFactorial(int num) { 

  int j = 1;
  
  for (int i = num; i > 0; i--)
  {
      j = j * i;
  }
  
  return j; 
            
}

int main() { 
  
  // keep this function call here
  cout << FirstFactorial(gets(stdin));
  return 0;
    
} 