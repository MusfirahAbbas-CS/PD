#include <iostream>
using namespace std;
void style(int rowsnum);
int main()
{
    int rowsnum;
    cout<< "Enter number of rows: ";
    cin>> rowsnum;
    style(rowsnum);
}
void style(int rowsnum)
{
 for(int row=rowsnum; row>=1; row--)
 {
    for(int col=row; col>=1; col--)
    {
        cout<<"* ";
    }
    cout<<endl;
 }
}