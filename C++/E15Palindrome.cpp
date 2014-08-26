#include <iostream>
using namespace std;

string Palindrome(string str) { 

  string forwards;
  string backwards;
  
  for(int i = 0; i < str.size(); i++)
  {
    if(str[i] != ' ')
    {
      forwards += tolower(str[i]); 
    }
    
    if(str[str.size() - 1 - i] != ' ')
    {
      backwards += tolower(str[str.size() - 1 - i]); 
    }
  }
  
  if(forwards == backwards)
  {
    return "true";
  }
  else
  {
    return "false";
  }         
}

int main() { 
  
  // keep this function call here
  cout << Palindrome(gets(stdin));
  return 0;
    
} 
