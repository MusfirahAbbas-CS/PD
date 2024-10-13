#include <iostream>
using namespace std;
string calculateHostelPrice(string month, int  numberOfStays);
main()
{
    string month;
    int numberOfStays;
    cout << "Enter the month(May, June, July, August, September, October): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> numberOfStays;


}
string calculateHostelPrice(string month, int  numberOfStays)
{
    float apartment;
    float studio;
    float discount_apartment;
    float discount_studio;
    if(month == "May" || "October")
    {
        if(numberOfStays<=7)
        {
            apartment=65*numberOfStays;
            studio=50*numberOfStays;
        }
        if(numberOfStays>7 && numberOfStays<=14)
        {
            apartment=65*numberOfStays;
            discount_studio=50*0.05;
            studio=(numberOfStays)*(50-discount_studio);
        }
        if(numberOfStays>14)
        {
            discount_apartment=65*0.1;
            apartment=(numberOfStays)*(65-discount_apartment);
            discount_studio=50*0.3;
            studio=(numberOfStays)*(50-discount_studio);
        }
        
    }
    if(month =="June" || month =="September")
    {
     if(numberOfStays<=14)
        {
            apartment=65*numberOfStays;
            studio=50*numberOfStays;
        }
        
        if(numberOfStays>14)
        {
            discount_apartment=68.70*0.2;
            apartment=(numberOfStays)*(65-discount_apartment);
            discount_studio=50*0.2;
            studio=(numberOfStays)*(50-discount_studio);
        }   
    }

}
