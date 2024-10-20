#include<iostream>
using namespace std;
int primorial(int n);
main()
{
 int n ;
 cout<<"Enter the number of prime numbers you want multiply:";
 cin>>n ;
 cout<<primorial(n);


}
int primorial(int n)
{
 int i , j = 2 ,  count = 0 , mul = 1 , flag =1 ;
 while(count < n)
 {
   i = 2 ;
   while( i <= j -1)
   {
    if(j % i == 0 )
    {
       flag = 0 ;
       break ;
    }
     i++ ;

   }
   if(flag == 1)
    {
     mul = mul * j ;
     count++ ;
    }
     j++ ;
     flag = 1 ;
    
  }
    return mul;



 
}