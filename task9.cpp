#include <iostream>
using namespace std;
 main (){
    int x,x1,x2,x3,x4,r;
    cout << "Enter a 4-digit number:";
    cin >> x;
    x1=x/1000;
    x=x%1000;
    x2=x/100;
    x=x%100;
    x3=x/10;
    x4=x%10;
    r=x1+x2+x3+x4;
    cout << "Sum of the individual digits: "<<r;
    
    
}