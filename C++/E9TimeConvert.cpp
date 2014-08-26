/*Using the C++ language, have the function TimeConvert(num) take the num parameter being passed and return the number of hours and minutes the parameter converts to (ie. if num = 63 then the output should be 1:3). Separate the number of hours and minutes with a colon. */

#include <iostream>
#include <sstream>
using namespace std;

string TimeConvert(int num) { 

  int hours = num / 60;
  int minutes = num % 60;
  ostringstream convert;
  
  //Convert int into string, using stringstream
  convert << hours;
  string result = convert.str();
  
  //Empty stream for next int
  convert.str(std::string());
  
  //Convert second int into string
  convert << minutes;
  result += ":";
  result += convert.str();
  
  return result; 
            
}

int main() { 
  
  // keep this function call here
  cout << TimeConvert(gets(stdin));
  return 0;
    
} 















  