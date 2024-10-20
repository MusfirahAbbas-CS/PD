#include <iostream>
using namespace std;

int triangle(int number);
main()
{
    int number=0;
    cout<< "Enter number of triangle:  ";
    cin>> number;
    int answer=triangle(number);
    cout<< answer;
    
}
int triangle(int number)
{
    int y = 0;  
    for(int x=1; x<=number; x++)
    {
      y= y+x;
    
    }
     return y;
}