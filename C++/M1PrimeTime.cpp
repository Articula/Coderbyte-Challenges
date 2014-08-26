/* Using the C++ language, have the function PrimeTime(num) take the num parameter being passed and return the string true if the parameter is a prime number, otherwise return the string false. The range will be between 1 and 2^16. */

#include <iostream>
using namespace std;

string PrimeTime(int num) { 
  
  if(num <= 1)
  {
    return "false";
  }
  
  if(num == 2)
  {
    return "true";
  }
  
  int upperNum = num / 2;
  
  for(int i = 2; i <= upperNum; i++)
  {
      if(num % i == 0)
      {
         return "false";
      }
  } 
  
  return "true";           
}

int main() { 
  
  // keep this function call here
  cout << PrimeTime(gets(stdin));
  return 0;
    
} 

