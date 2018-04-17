#include <iostream>
#include<string> 

using namespace std;

int printSort(int&, int&, int&);
int initialRed; 
int initialGreen;
int initialBlue;
#include <cstdlib>
#include<ctime>

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA

initialRed= red;
initialBlue= blue;
initialGreen=green;

printSort(red, green, blue); 


  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

int printSort(int& first, int& middle, int& last)

{ 
if (initialRed > initialGreen) 
{
 if (initialRed > initialBlue) last = initialRed; 
 else if (initialRed < initialBlue) 
 middle = initialRed; } 
 if (initialGreen > initialRed) 
 { if (initialGreen > initialBlue) 
 first = initialGreen; 
 else if (initialGreen <initialBlue) 
 middle = initialGreen; } 
 if (initialBlue > initialGreen) 
 { if (initialBlue > initialRed) 
 first = initialBlue; 
 else if (initialBlue < initialRed) middle = initialBlue; }
  if (initialGreen != first && initialGreen != middle) 
  middle = initialGreen; 
  if (initialRed != first && initialRed != middle) 
  last = initialRed; 
  if (initialBlue != first && initialBlue != middle) 
  last = initialBlue;

return first; 
return middle; 
return last; 
  } 

