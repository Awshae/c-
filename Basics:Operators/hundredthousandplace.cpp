#include<iostream>
using namespace std;
//100 and 1000th place digit addition.
int main(){
    int n = 12345;
    cout<<"Sum of 100th and 1000th place digit is "<<(n/100)%10+(n/1000)%10;
}