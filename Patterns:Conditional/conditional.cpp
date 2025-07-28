//if,if else,if else ladder, switch statement.
#include <iostream>
using namespace std;
int main(){
    //for switch case cannot be expression, cannot be float which might match to another case.
    //in a switch case, there can be staements inside the switch not under a case. they will not execute unless its in a case block.
    //anything inside ' '  is a character except numbers.
    //ASCII 'a'-97, 'A' -65, '0' -48, '\o' -0 null character.
    char ch = 65;
    cout<<ch<<endl;
    int n = 4;
    switch (n%2==0)
    {
    case 0:
        cout<<"even"<<endl;
        break;
    case 1:
        cout<<"odd"<<endl;
    default:
        break;
    }

    int a = 4;
    if(a==5||6)
        cout<<"Yes"<<endl;
    else    
        cout<<"No"<<endl;

    int a1=5,b=4,c=3;
    if(a1>b>c)
        cout<<"yes"<<endl;
    else
        cout<<"No";
}