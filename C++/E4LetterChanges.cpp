/*Using the C++ language, have the function LetterChanges(str) take the str parameter being passed and modify it using the following algorithm. Replace every letter in the string with the letter following it in the alphabet (ie. c becomes d, z becomes a). Then capitalize every vowel in this new string (a, e, i, o, u) and finally return this modified string. */

#include <iostream>
#include <string>
#include <ctype.h>  //For isalpha
using namespace std;

string LetterChanges(string str) { 

  string alphabet = "abcdefghijklmnopqrstuvwxyz";
  string vowels = "aeiou";
  string result = "";
  
  for(int i = 0; i < str.size(); i++)
  {
    if(!isalpha(str[i]))
    {
      result += str[i];
    }
    else
    {
      if(str[i] == 'z')
      {
        result += 'a';
      }
      else
      {
        result += alphabet.at(alphabet.find(str[i]) + 1);
      }
    }
  }
  
  //Then capitalize the vowels in the new string
  for(int j = 0; j < result.size(); j++)
  {
      if(vowels.find(result[j]) != std::string::npos) //If char has a position in vowels
      {
        result[j] = toupper(result[j]);
      }
  }
  
  
  return result; 
            
}

int main() { 
  
  // keep this function call here
  cout << LetterChanges(gets(stdin));
  return 0;
    
} 