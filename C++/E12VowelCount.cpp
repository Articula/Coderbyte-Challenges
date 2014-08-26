/* Using the C++ language, have the function  VowelCount(str) take the str string parameter being passed and return the number of vowels the string contains (ie. "All cows eat grass" would return 5). Do not count y as a vowel for this challenge. */

/* Alternative solution: Only loop through the input string and do one or two big if statements to see it the current letter is a vowel (if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') etc... )*/

#include <iostream>
using namespace std;

int VowelCount(string str) { 

  string vowels = "aeiouAEIOU";
  int result = 0;
  
  for(int i = 0; i < vowels.size(); i++)
  {
		for(int j = 0; j < str.size(); j++)
		{
			if(str[j] == vowels[i])
			{
				result++;
			}	
		}
  }
  
  return result;  
}

int main() { 
  
  // keep this function call here
  cout << VowelCount(gets(stdin));
  return 0;
    
} 

