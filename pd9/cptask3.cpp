#include <iostream>
using namespace std;
bool length(string input);
string input;
int  idx;
main()
{   
    cout << "Enter word: ";
    cin >> input;
    
    cout << length(input);


}
bool length(string input)
{
    while(input[idx]!='\0')
    {
        idx++;
    }
    int count=idx;
    if(count%2==0)
    {
        return true;
    }
    else{
        return false;
    }
}