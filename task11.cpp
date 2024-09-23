#include<iostream>
using namespace std;
main()
{
int person_age;
cout<<"Enter a person's age:";
cin>>person_age;
int moved;
cout<<"Enter number of time they have moved:";
cin>>moved;
int average;
average = person_age/(moved+1);
cout<<"average number of years person lived in same house:"<<average;
}


