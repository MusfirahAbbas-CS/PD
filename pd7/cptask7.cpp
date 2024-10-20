#include <iostream>
using namespace std;
main()
{
    int  num;
    int n;
    int  treated=0;
    int untreated=0;
    int doctor=7;
    cout << "Enter Number of days you visited Hospital: ";
    cin >> num;
    for(int i=1; i <=num; i++)
    {
        cout << "Enter number of patients who visited hospital on Day "<<i<<": ";
        cin >> n;
        
        if(n>doctor)
        {
            int untreatedPatient=n-doctor;
            untreated +=untreatedPatient;
        }
        treated +=doctor;
        if(i%2==0; && untreated >treated)
        {
            doctor++
        }

        
        
    }
    cout << treated<<endl;
    cout << untreated;
}