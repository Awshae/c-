//False is 0, True is any non-zero value when true.
//precedence (), !, []
#include <iostream>
using namespace std;
int main(){
    int a = 5>3;
    int b = 5>3 +6;
    cout<<a<<b<<endl;
    a = 0;
    if(a)
    {
        cout<<"Yes";
        cout<<"No";
    }
}