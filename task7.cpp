#include <iostream>
using namespace std;
main() {
    float a,c,na,nc,donat,remain,amount_a,total,amount_c,p;
    string n;
cout << "Enter the movie name: ";
cin >> n;
cout << "Enter the adult ticket price:$ ";
cin >> a;
cout << "Enter the child ticket price:$ ";
cin >> c;
cout << "Enter the no of adult ticket sold: ";
cin >> na;
cout << "Enter the no of child ticket sold: ";
cin >> nc;
cout << "Enter the percentage of the ammount to be donated to charity: ";
cin >> p;
amount_a=a*na;
amount_c=c*nc;
total=amount_a+amount_c;
donat=(total*p)/100;
remain=total-donat;
cout <<"Movie:"<<n<<endl;
cout << "Total ammount generated from ticket sales: $"<<total<<endl;
cout << "Donation to charity ("<<p<<"%): "<<donat<<endl;
cout << "Remaining amount after donation: $"<<remain;

}