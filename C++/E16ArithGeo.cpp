/* Using the C++ language, have the function  ArithGeo(arr) take the array of numbers stored in arr and return the string "Arithmetic" if the sequence follows an arithmetic pattern or return "Geometric" if it follows a geometric pattern. If the sequence doesn't follow either pattern return -1. An arithmetic sequence is one where the difference between each of the numbers is consistent, where as in a geometric sequence, each term after the first is multiplied by some constant or common ratio. Arithmetic example: [2, 4, 6, 8] and Geometric example: [2, 6, 18, 54]. Negative numbers may be entered as parameters, 0 will not be entered, and no array will contain all the same elements.
5, 10, 15 = "Arithmetic"
2, 4, 16, 24 = -1
*/
#include <iostream>
using namespace std;

string ArithGeo(int arr[], int size) { 
  
  if(size > 1)
  {
	int arithmetic = 0;
	int geometric = 0;
  
    //Arithmetic Check
    arithmetic = arr[1] - arr[0];
    int arithCnt = 0;
    
    for(int i = 0; i < size - 1; i++)
    {
       if(arr[i + 1] - arr[i] != arithmetic)
       {
         arithCnt++; 
       }
    }
    
    if(arithCnt == 0)
    {
      return "Arithmetic"; 
    }
    
    
    //Geometric Check
    
    //Is the second item dividable by the first with no remainder? 
    if(arr[1] % arr[0] == 0)
    {
      geometric = arr[1]/arr[0];
      
      int geoCnt = 0;
      for(int j = 0; j < size - 1; j++)
      {
        if(arr[j + 1]/arr[j] != geometric)
        {
          geoCnt++;
        }
      }
      
      if(geoCnt == 0)
      {
        return "Geometric"; 
      }
    }
    
    
    //Arithmetic and Geometric checks negative.
    return "-1";  
  }
  else
  {
    //There is one of less items in the array. No patterns available.
    return "-1";
  }         
}

int main() { 
   
  // keep this function call here
  /* Note: In C++ you first have to initialize an array and set 
     it equal to the stdin to test your code with arrays. 
     To see how to enter arrays as arguments in C++ scroll down */
     
  int A[] = gets(stdin);
  //Array size = Total size of array/size of array data type 
  int arraySize = sizeof(A)/sizeof(int);  
  cout << ArithGeo(A, arraySize);
  return 0;
    
} 