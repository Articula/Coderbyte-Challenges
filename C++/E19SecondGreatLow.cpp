/* Using the C++ language, have the function SecondGreatLow(arr) take the array of numbers stored in arr and return the second lowest and second greatest numbers, respectively, separated by a space. For example: if arr contains [7, 7, 12, 98, 106] the output should be 12 98. The array will not be empty and will contain at least 2 numbers. It can get tricky if there's just two numbers! */

/* Solution: */
#include <iostream>
#include <sstream>
#include <algorithm>    // std::sort
#include <vector>       // std::vector
using namespace std;

struct comparisonClass {
  bool operator() (int i,int j) { return (i<j);}
} comparisonObject;

string IntToString(int num){
  stringstream sstream;
  sstream << num;
  return sstream.str();
}

string SecondGreatLow(std::vector<int> resultVector) { 
	
	//Using comparisonObject to do the ordering
  std::sort (resultVector.begin(), resultVector.end(), comparisonObject);
  
  //Erase duplicate numbers
  resultVector.erase( unique( resultVector.begin(), resultVector.end() ), resultVector.end() );
	
  
  return IntToString(resultVector[1]) + " " + IntToString(resultVector[resultVector.size() - 2]);        
}

int main() { 
   
  // keep this function call here
  /* Note: In C++ you first have to initialize an array and set 
     it equal to the stdin to test your code with arrays. 
     To see how to enter arrays as arguments in C++ scroll down */
     
  int A[] = gets(stdin);
	//Array size = Total size of array/size of array data type 
  int arraySize = sizeof(A)/sizeof(int);
  std::vector<int> resultVector (A, A+arraySize);
  cout << SecondGreatLow(resultVector);
  return 0;  
} 


/* Alternative Solution: */

#include <iostream>
#include <sstream>
using namespace std;

string IntToString(int num){
  stringstream sstream;
  sstream << num;
  return sstream.str();
}

string SecondGreatLow(int arr[], int size) { 

  /* C++ integers will always have a value (there is no check for no value), 
	so setting to 0 which will work without the need for flags 
	(flags added to account for minus numbers in the array) */
  int lowest = arr[0];
	int highest = arr[0];
	int secondLowest = 0; 
	int secondHighest = 0;
	
	//Flags required in the event the second highest or second lowest number actually is 0.
	bool lowFlag = false;
	bool highFlag = false;
	
	for(int i = 1; i < size; i++)
	{
		if(arr[i] > highest)
		{
			secondHighest = highest;
			highest = arr[i];
		}
		else if(arr[i] > secondHighest || secondHighest == 0 && !highFlag)
		{
			secondHighest = arr[i];
			highFlag = true;
		}
		
		if(arr[i] < lowest)
		{
			secondLowest = lowest;
			lowest = arr[i];
		}
		else if(arr[i] < secondLowest || secondLowest == 0 && !lowFlag)
		{
			secondLowest = arr[i];
			lowFlag = true;
		}
	}
	
  
  return IntToString(secondLowest) + " " + IntToString(secondHighest);
            
}

int main() { 
   
  // keep this function call here
  /* Note: In C++ you first have to initialize an array and set 
     it equal to the stdin to test your code with arrays. 
     To see how to enter arrays as arguments in C++ scroll down */
     
  int A[] = gets(stdin);
	//Array size = Total size of array/size of array data type 
  int arraySize = sizeof(A)/sizeof(int);
  cout << SecondGreatLow(A, arraySize);
  return 0;
    
} 
