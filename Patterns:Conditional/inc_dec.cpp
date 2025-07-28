#include <iostream>
using namespace std;
int main(){
    int a = 5;
    cout<<a++<<endl;
    cout<<++a<<endl;
    cout<<a--<<endl;
    cout<<--a<<endl;
    cout<<"-------------"<<endl;

    int b=5,c=6;
    if(b++||++c)
        cout<<"yes"<<endl;
    cout<<b<<endl<<c<<endl;
    cout<<"-------------"<<endl;

    int d=0,e=6;
    if(d--&&e--)
        cout<<"yes"<<endl;
    cout<<d<<endl<<e<<endl;
}