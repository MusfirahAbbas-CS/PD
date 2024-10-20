#include <iostream>
using namespace std;
int main()
 {
   int days, patients, doctors = 7;
   int treatedPatients = 0, untreatedPatients = 0;

   cout << "Enter the number of days: ";
   cin >> days;
   for (int day = 1; day <= days; day=day + 1) 
   {
     cout << "Enter the number of patients on day " << day << ": ";
     cin >> patients;
    
       if (day % 3 == 0 && untreatedPatients > treatedPatients) 
        {
            doctors= doctors + 1;
        }

       
        if (patients <= doctors) 
        {
            treatedPatients = treatedPatients + patients;  
        } 
        else 
        {
            treatedPatients = treatedPatients + doctors;    
            untreatedPatients =  untreatedPatients + (patients - doctors); 
        }
   }
    cout << "Treated patients: " << treatedPatients << endl;
    cout << "Untreated patients: " << untreatedPatients << endl;

    return 0;
}