/*Using the C++ language, have the function  LetterCapitalize(str) take the str parameter being passed and capitalize the first letter of each word. Words will be separated by only one space. */

#include <iostream>
#include <ctype.h>  //For isalpha
using namespace std;

string LetterCapitalize(string str) { 

  bool newWord = true;

  for(int i = 0; i < str.size(); i++)
  {
    if(newWord)
	{
	  if(isalpha(str[i]))
	  {
	    str[i] = toupper(str[i]);
		newWord = false;
	  }
	}
  
		//Reset newWord flag when a space is hit 
		if(str[i] == ' ')
		{
			newWord = true;
		}
  }
  
  return str; 
            
}

int main() { 
  
  // keep this function call here
  cout << LetterCapitalize(gets(stdin));
  return 0;
    
} 