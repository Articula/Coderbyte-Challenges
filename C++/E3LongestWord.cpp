/* Using the C++ language, have the function LongestWord(sen) take the sen parameter being passed and return the largest word in the string. If there are two or more words that are the same length, return the first word from the string with that length. Ignore punctuation and assume sen will not be empty. */

#include <iostream>
#include <string>
#include <ctype.h>  //For isalpha
using namespace std;

string LongestWord(string sen) { 
 
  string currentWord;
  string longestWord;
  
  //For every character in the sentence string...
  for(int i = 0; i < sen.size(); i++)
  {
    //If character is alphabetic add to currentWord.
    if(isalpha(sen[i]))
    {
      currentWord += sen[i];
    }
    
    //If current character is a space or is the last in the sentence, 
    //it is the end of a word, so compare with current largest word.
     if(sen[i] == ' ' || i == sen.size() - 1)
     {
       if(currentWord.size() > longestWord.size())
       {
          longestWord = currentWord; 
       }
       
       currentWord = "";
     }
  }
  
  return longestWord;    
}

int main() { 
  
  // keep this function call here
  cout << LongestWord(gets(stdin));
  return 0;  
} 