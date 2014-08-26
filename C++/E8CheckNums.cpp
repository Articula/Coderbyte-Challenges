/* Using the C++ language, have the function  CheckNums(num1,num2) take both parameters being passed and return the string true if num2 is greater than num1, otherwise return the string false. If the parameter values are equal to each other then return the string -1.*/

#include <iostream>
#include <string>
using namespace std;

string CheckNums(int num1, int num2) { 

  string result;

  if(num2 > num1)
  {
    result = "true";
  }
  else if(num2 < num1)
  {
    result = "false";
  }
  else
  {
		result = "-1";
  }

  
  return result;          
}

int main() { 
  
  // keep this function call here
  cout << CheckNums(gets(stdin));
  return 0;
    
} 