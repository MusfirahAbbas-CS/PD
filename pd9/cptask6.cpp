#include <iostream>
using namespace std;
main()
{
    int n;
    int arr[3];
    for(int i=0;i<3;i++)
    {
        cout <<"Enter the array: ";
        cin>>arr[i];
    }
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin>> n; 
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<3;k++ )
    
    {
        if(arr[k]%2==0)
        {
            arr[k]=arr[k]-2;
        }
        else
        {
            arr[k]=arr[k]+2;
        }
    }
    }
    for(int i=0;i<3;i++)
    {
        cout << arr[i]<<endl;
    }
}