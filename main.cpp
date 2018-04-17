#include <iostream>
using namespace std;

void swap(int &red, int &green, int &blue);
void greatestToLeast(int &highest,int &middle,int &least);
int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA

//call function
greatestToLeast(red, green, blue);



  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}
//function definition
void swap(int &left, int &right)
{
int temp = left;
left = right;
right = temp;
}

void greatestToLeast(int &highest,int &middle,int &least)
{
if (highest > middle)
swap (highest,middle);

if (highest > least)
swap (highest,least);

if (middle > least)
swap (middle,least);
}

