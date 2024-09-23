#include<iostream>
using namespace std;
main()
{
float sq_meter; 
float width;
float height;
cout<<"Number of square meter you can paint:";
cin>>sq_meter;
cout<<"Width of the single wall (in meters):";
cin>>width;
cout<<"Height of single wall (in meters):";
cin>>height;
float painted_walls;
float area=height*height;
painted_walls = sq_meter/area;
cout<<"Number of walls you can paint:"<<painted_walls;
}
