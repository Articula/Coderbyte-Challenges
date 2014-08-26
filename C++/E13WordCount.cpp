/* Using the C++ language, have the function  WordCount(str) take the str string parameter being passed and return the number of words the string contains (ie. "Never eat shredded wheat" would return 4). Words will be separated by single spaces. */

#include <iostream>
using namespace std;

int WordCount(string str) { 

  int result = 0;
  
  if(str[0] != ' ')
  {
    result++; 
  }
  
  for(int i = 0; i < str.size(); i++)
  {
      if(str[i] == ' ')
      {
        //Check to make sure there is another character after this in the string
        if(i + 1 <= str.size())
        {
          if(str[i + 1] != ' ')
          {
            result++; 
          }
        }
      }
  }
    
  return result; 
            
}

int main() { 
  
  // keep this function call here
  cout << WordCount(gets(stdin));
  return 0;
    
} 