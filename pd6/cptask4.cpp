#include <iostream>
using namespace std;
float regular(int min);
float premium(int min,string time);
main()
{
    string code;
    string time;
    int min;
    cout<< "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> code;
    cout << "Enter time of call(D/d for day, N/n for night): ";
    cin >> time;
    cout << "Enter the number of minutes used: ";
    cin >> min;
    float output=regular(min);
    float output_1=premium(min,time);
    if(code == "r" || code =="R")
    {
        cout << "Service Type: Regular";
        cout << "Total Minutes used: "<<min;
        cout << "Amount due:$ "<<output;         
    } 
    if(code == "p" || code == "P")
    {
        cout << "Service type: Premium";
        cout << "\nTotal Minutes Used: "<<min;
        cout << "\nAmount due:$ "<<output_1;
    }


}
float regular(int min)
{
    float amount;
    float more;
    if(min<=50)
    {
      amount=10;
    }
    if(min>50)
    {
        more=min-50;
        amount=10+(more*0.2);
    }
    return amount;
}
float premium(int min,string time)
{
    float amount;
    float more;
    if (time=="d" || time =="D")
    {
        if(min<=75)
        {
            amount=25;
        }
        if(min>75)
        {
            more=min-75;
            amount=25+ (more*0.1);
        }
    return amount;
    }
    else
    {
        if(min<=100)
        {
            amount=25;
        }
        if(min>100)
        {
            more=min-100;
            amount=25+(more*0.05);;
        }
        return amount;
    }

}


