#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the amount ";
    int bal;
    cin>>bal;
    cout<<"Balance given is "<<bal<<endl;
    int rem;
    rem = bal;
    cout<< rem/100<<" hundred rupee notes"<<endl;
    cout<< rem%100/50<<" fifty rupee notes"<<endl;
    cout<< rem%50/10<<" ten rupee notes"<<endl;
    cout<< rem%10<<" one rupee coins"<<endl;
}