#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the leap year ";
    cin>>year;

    //Century year/400 or notcentruyyear/4.
    if((year%400==0)||(year%100!=0 && year%4==0))
        cout<<"Leap Year";
    else   
        cout<<"Not a Leap Year";

}