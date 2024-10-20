#include <iostream>
#include <iomanip>
using namespace std;
main()
{
    double count;
    double p1=0,p2=0,p3=0;
    cout << "Enter count of cargo for transportation: ";
    cin >> count;
    for(int i=1;i<=count;i++)
    {
        int cargo;
        cout << "Enter tonnage for cargo "<<i<<" : ";
        cin>> cargo;
        if(cargo<=3)
        {
            p1 += cargo;
        }
        if(cargo>3 && cargo<=11)
        {
            p2 += cargo;
        }
        if(cargo>11)
        {
            p3 += cargo;
        }
        
    }
    int sum= p1+p2+p3;
    
    double average=((p1*200)+(p2*175)+(p3*120))/sum;
    double percent1=p1/sum*100.0;
    double percent2=p2/sum*100.0;
    double percent3=p3/sum*100.0;
    cout << fixed;
    cout << setprecision (2);
    
    cout << average<<endl;
    cout << percent1<<"%"<<endl;
    cout << percent2<<"%"<<endl;
    cout << percent3<<"%"<<endl;

}