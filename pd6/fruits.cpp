#include <iostream>
using namespace std;
float calculateFruitPrice(string friut, string dayOfWeek, double quantity);
main()
{
    string fruit;
    string dayOfWeek;
    double quantity;
    cout << "Enter the fruit name: ";
    cin >> fruit;
    cout << "Enter the day of the week:";
    cin >> dayOfWeek;
    cout << "Enter the quantity: ";
    cin >> quantity;
    //  if(dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek =="Wednesday" || dayOfWeek =="Thursday" || dayOfWeek =="Friday" || dayOfWeek== "Saturday" || dayOfWeek =="Sunday")
    // {
    //     float result = calculateFruitPrice(fruit, dayOfWeek, quantity);
    // cout << result;
    // }
     if((dayOfWeek != "Monday" && dayOfWeek != "Tuesday" && dayOfWeek !="Wednesday" && dayOfWeek !="Thursday" && dayOfWeek !="Friday" && dayOfWeek!= "Saturday" && dayOfWeek !="Sunday" )||( fruit != "banana" && fruit !="apple" && fruit!= "orange" && fruit != "grapefruit" && fruit!= "kiwi" && fruit!= "pineapple" &&fruit!= "grapes" ))
    {
    cout<<"error";
    }
    else
    {
        float result = calculateFruitPrice(fruit, dayOfWeek, quantity);
    cout << result;
    }
}
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity)
{
    float output;
    if (dayOfWeek == "Monday" || dayOfWeek != "Tuesday" || dayOfWeek == "Wednesday" || dayOfWeek == "Thursday" || dayOfWeek == "Friday")
    {
        if (fruit == "banana")
        {
            output = quantity * 2.50;
        }

        if (fruit == "apple")
        {
            output = quantity * 1.20;
        }
        if (fruit == "orange")
        {
            output = quantity * 0.85;
        }
        if (fruit == "grapefruit")
        {
            output = quantity * 1.45;
        }
        if (fruit == "kiwi")
        {
            output = quantity * 2.70;
        }

        if (fruit == "pineapple")
        {
            output = quantity * 5.50;
        }
        if (fruit == "grapes")
        {
            output = quantity * 3.85;
        }
        return output;
    }
         if (dayOfWeek == "Saturday" || dayOfWeek == "Sunday")
    {
        if (fruit == "banana")
        {
            output = quantity * 2.70;
        }

        if (fruit == "apple")
        {
            output = quantity * 1.25;
        }
        if (fruit == "orange")
        {
            output = quantity * 0.90;
        }
        if (fruit == "grapefruit")
        {
            output = quantity * 1.60;
        }
        if (fruit == "kiwi")
        {
            output = quantity * 3.00;
        }

        if (fruit == "pineapple")
        {
            output = quantity * 5.60;
        }
        if (fruit == "grapes")
        {
            output = quantity * 4.20;
        }
        return output;
    }
}