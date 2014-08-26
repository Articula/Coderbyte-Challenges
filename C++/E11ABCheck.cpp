/*Using the C++ language, have the function  ABCheck(str) take the str parameter being passed and return the string true if the characters a and b are separated by exactly 3 places anywhere in the string at least once (ie. "lane borrowed" would result in true because there is exactly three characters between a and b). Otherwise return the string false. */

#include <iostream>
using namespace std;

string ABCheck(string str) { 
  
  for(int i = 0; i < str.size(); i++)
  {
		if(str[i] == 'a' || str[i] == 'A')
		{
			//Safety check, make sure the string is long enough to have a character 4 spaces from here
			if(i+4 <= str.size())
			{
				if(str[i+4] == 'b' || str[i+4] == 'B')
				{
					return "true";
				}
			}
		}
			
			if(str[i] == 'b' || str[i] == 'B')
		{
			//Safety check, make sure the string is long enough to have a character 4 spaces from here
			if(i+4 <= str.size())
			{
				if(str[i+4] == 'a' || str[i+4] == 'A')
				{
					return "true";
				}
			}
		}
  }
  
  return "false";         
}

int main() { 
  
  // keep this function call here
  cout << ABCheck(gets(stdin));
  return 0;
    
} 