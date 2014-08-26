/*Using the C++ language, have the function  SimpleSymbols(str) take the str parameter being passed and determine if it is an acceptable sequence by either returning the string true or false. The str parameter will be composed of + and = symbols with several letters between them (ie. ++d+===+c++==a) and for the string to be true each letter must be surrounded by a + symbol. So the string to the left would be false. The string will not be empty and will have at least one letter. */

#include <iostream>
using namespace std;

string SimpleSymbols(string str) { 

  string result = "true";

  for(int i = 0; i < str.size(); i++)
  {
		if(isalpha(str[i]))
		{
			//If first or last char in string is alphabetic, the string will be false (this also avoids c++ attempting to check string locations below 0 or beyond max size)
			if(i == 0 || i == str.size() - 1) 
				{
					string result = "false";
					return result;
				}
			else if(str.at(i + 1) != '+' || str.at(i - 1) != '+')
			{
				string result = "false";
			return result;
			}
		}
  }
  
  return result;       
}

int main() { 
  
  // keep this function call here
  cout << SimpleSymbols(gets(stdin));
  return 0;
    
} 