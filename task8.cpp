#include <iostream>
using namespace std;
 main (){
    float v,f;
    int ev,ef,te,kv,kf,rps;
    cout << "Enter vegetable price per kilogram (in coin):";
    cin >> v;
    cout << "Enter fruit price per kilogram (in coin):";
    cin >> f;
    cout << "Enter total kilograms of vegetables :";
    cin >> kv;
    cout << "Enter total kilograms of fruits:";
    cin >> kf;
    ev=v*kv;
    ef=f*kv;
    te=ev+ef;
    rps=te/1.94;
    cout << "Total earnings in Rupees (Rps):"<<rps;
}