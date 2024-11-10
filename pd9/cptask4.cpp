#include <iostream>
using namespace std;
string length(int number[],int n);
main()
{
    int n;
    cout <<"Enter size: ";
    cin >> n;
    int number[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter number: ";
        cin>>number[n];
    }
    string output;
    output=length(number,n);
    cout << output;
}
string length(int number[],int n)
{
     string result="Not exit";
    for(int i =0; i<n;i++)
    {
       
            int size=number[n];
            while(size!=0)
            {
                int x=size%10;
                if(x==7){
                    result="Boom!";
                    break;}

                size/=10;
            }
        }
        return result;
        
    }
   

