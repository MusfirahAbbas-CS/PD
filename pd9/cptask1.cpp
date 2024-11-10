#include <iostream>
using namespace std;
main()
{
    string Fruit[4]={"peach","apple","guava","watermelon"};
    int price[4]={60,70,40,30};
    int fruitprice[4];
    int sum=0;
    int quantity;
    string fruit[4];
    int no;
    cout << "Enter no:";
    cin>> no;
    for(int idx=0;idx<no;idx++)
    {
        cout << "Enter fruit: "<<endl;
        cin  >> fruit[idx];
        cout << "Enter quantity: "<<endl;
        cin  >> quantity;
        if(fruit[idx]=="peach")
        {
            fruitprice[idx]=price[0]*quantity;
            sum+=fruitprice[idx];
        }
        if(fruit[idx]=="apple")
        {
            fruitprice[idx]=price[1]*quantity;
            sum+=fruitprice[idx];
        }
        if(fruit[idx]=="guava")
        {
            fruitprice[idx]=price[2]*quantity;
            sum+=fruitprice[idx];
        }
        if(fruit[idx]=="watermelon")
        {
            fruitprice[idx]=price[3]*quantity;
            sum+=fruitprice[idx];
        }

    }
    cout << "Total price: " << sum << endl;
    

}