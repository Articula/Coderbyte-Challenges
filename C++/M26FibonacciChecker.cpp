#include <iostream>
#include <math.h>
using namespace std;
 
// A utility function that returns true if num is perfect square
bool IsPerfectSquare(int num)
{
    int square = sqrt(num);
    return (square*square == num);
}

string FibonacciChecker(int num) { 
  
  if(IsPerfectSquare(5*num*num + 4) || IsPerfectSquare(5*num*num - 4))
  {
    return "yes"; 
  }
  else
  {
    return "no"; 
  }           
}

int main() { 
  
  // keep this function call here
  cout << FibonacciChecker(gets(stdin));
  return 0;
    
} 