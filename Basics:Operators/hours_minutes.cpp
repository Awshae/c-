#include <iostream>
using namespace std;
//program to convert 4.3 hours to 4 hours 18 minutes.
int main(){
    cout<<"enter the time e.g 2.5 (hours)";
    float time,hours;
    cin>>time;
    hours= int(time);
    cout<<"The hours are "<<hours<<", minutes are ";
    cout<<(time-hours)*60;
}
