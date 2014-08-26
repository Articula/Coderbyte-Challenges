/* Using the C++ language, have the function LetterCountI(str) take the str parameter being passed and return the first word with the greatest number of repeated letters. For example: "Today, is the greatest day ever!" should return greatest because it has 2 e's (and 2 t's) and it comes before ever which also has 2 e's. If there are no words with repeating letters return -1. Words will be separated by spaces. */

#include <iostream>
using namespace std;

string LetterCountI(string str) { 

	string result = "-1";
	string currentWord;
	int mostRepeats = 0;
	int repeatedCnt = 0;
	
	for(int i = 0; i <= str.size(); i++)
	{
		if(str[i] == ' ' || i == str.size())
		{
			//End of word.
			if(repeatedCnt > 0 && repeatedCnt > mostRepeats)
			{
				result = currentWord;
				mostRepeats = repeatedCnt;
			}
			
			//Flush currentWord in prep for the next word!
			currentWord.clear();
			repeatedCnt = 0;
		}
		else
		{
			for(int j = 0; j < currentWord.size(); j++)
			{
				if(currentWord[j] == str[i])
				{
					repeatedCnt++;
				}
			}
			
			currentWord += str[i];
		}
	}

  
  return result;      
}

int main() { 
  
  // keep this function call here
  cout << LetterCountI(gets(stdin));
  return 0;
    
} 