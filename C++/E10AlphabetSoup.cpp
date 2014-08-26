/*Using the C++ language, have the function  AlphabetSoup(str) take the str string parameter being passed and return the string with the letters in alphabetical order (ie. hello becomes ehllo). Assume numbers and punctuation symbols will not be included in the string. */

/* Alternative solution: using the alphabet string, have the indices of str stored in an array. Sort the array, then populate the result string using the alphabet string and ordered indices array. More efficient (less looping!!). */

#include <iostream>
using namespace std;

string AlphabetSoup(string str) { 

  string result;
  string alphabet = "abcdefghijklmnopqrstuvwxyz";
  int letterCnt;
  
  //For each letter in the alphabet
  for(int i = 0; i < alphabet.size(); i++)
  {
		letterCnt = 0;
		
		//For each letter in the input string, check if it matches current letter
		for(int j = 0; j < str.size(); j++)
		{
			if(str[j] == alphabet[i])
			{
				letterCnt++;
			}
		}

		//If there were instances of this letter, add that many to result
		if(letterCnt > 0)
		{
			for(int k = 0; k < letterCnt; k++)
			{
				 result += alphabet[i];
			}
		}
  }  

  
  return result;             
}

int main() { 
  
  // keep this function call here
  cout << AlphabetSoup(gets(stdin));
  return 0;
    
} 
