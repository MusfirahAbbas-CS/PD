#include<iostream>
using namespace std;
void printStar1(int rowSize);
void printStar2(int rowSize);
main()
{
 int rowSize ;
 cout<<"Enter the desired number of rows:" ;
 cin>>rowSize;
 printStar1(rowSize);
 printStar2(rowSize);
}
void printStar1(int rowSize)
{
 for(int row = 1 ; row <= rowSize ; row++ )
 {
  for(int col = 1; col <= row ; col++ )
  {
    cout<< "*" ;
  }
  cout <<  endl ;
 }

}
void printStar2(int rowSize)
{
 for(int row = 0  ; row < rowSize ; row++ )
  {
   int numAsterick = 15 - row ;
  for(int col = 0 ; col < numAsterick ; col++ )
  {
    cout<< "*" ;
  }
  cout <<  endl ;
  }




}