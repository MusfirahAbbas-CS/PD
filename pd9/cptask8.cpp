#include <iostream>
using namespace std;
main()
{
    int no;
    cout << "Enter number of elements: ";
    cin >> no;
    string color[no];
    for(int i=0;i<no;i++)
    {
        cin>>color[i];

    }
    int secForColor=no*2;
    int change= 0;
    for(int j=0;j<no-1;j++)
    {
        if(color[j]!=color[j+1])
        {
            change+=1;
        }
    }
    int switching=change*1;
    int total=switching+secForColor;
    cout<<"The total time in second: "<<total;

}