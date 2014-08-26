#include <iostream>
using namespace std;

string ExOh(string str) { 

  int xcnt = 0;
  int ocnt = 0;
  
  for(int i = 0; i < str.size(); i++)
  {
    if(str[i] == 'x' || str[i] == 'X')
    {
      xcnt++;
    }
    else if(str[i] == 'o' || str[i] =='O')
    {
      ocnt++;
    }
  }
  
  if(xcnt == ocnt)
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
  cout << ExOh(gets(stdin));
  return 0;
    
} 
