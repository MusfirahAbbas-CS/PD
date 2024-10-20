#include <iostream>
using namespace std;
main(){
  int n;
  cout << "Enter number of rows: ";
  cin >> n;
    int rowSize=n;
    for(int row = 0; row < n ; row++)
    {
        int numAsterick = n- row;
        for(int col=0 ; col<numAsterick ; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}