#include <iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(i-1); j++)
            cout<<" ";
        cout<<i;
        for(int k=1; k<=(n-i); k++)
            cout<<"  ";
        if(i!=n)
            cout<<i;
        cout<<endl;
}
for(int i=n; i>=1; i--){
    if(i!=n){
        for(int j=1; j<=(i-1); j++)
            cout<<" ";
        cout<<i;
        for(int k=1; k<=(n-i); k++)
            cout<<"  ";
        if(i!=n)
            cout<<i;
        cout<<endl;}
}
}
