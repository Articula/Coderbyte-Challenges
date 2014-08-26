/* Using the C++ language, have the function RunLength(str) take the str parameter being passed and return a compressed version of the string using the Run-length encoding algorithm. This algorithm works by taking the occurrence of each repeating character and outputting that number along with a single character of the repeating sequence. For example: "wwwggopp" would return 3w2g1o2p. The string will not contain any numbers, punctuation, or symbols.*/

#include <iostream>
#include <sstream>
using namespace std;

string IntToString(int num){
  stringstream sstream;
  sstream << num;
  return sstream.str();
}

string RunLength(string str) { 

string result;
  int letterCnt = 1;
  
  for(int i = 1; i < str.size(); i++)
  {  
    if(str[i] != str[i - 1])
    {
      result += IntToString(letterCnt) + str[i-1];
      
      letterCnt = 1;
      
      if(i == str.size() - 1)
      {
        result += IntToString(1) + str[i]; 
      }
    }
    else
    {
      letterCnt++;
      
      if(i == str.size() - 1)
      {
        result += IntToString(letterCnt) + str[i]; 
      }
    }
  }
  
  return result;    
}

int main() { 
  
  // keep this function call here
  cout << RunLength(gets(stdin));
  return 0;
    
}