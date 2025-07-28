#include<iostream>
using namespace std;
int main(){
    cout<<"Pattern 1"<<endl; //all stars
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    cout<<"Pattern 2"<<endl; //1111 2222 3333 ...
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    cout<<"Pattern 3"<<endl; //1234 1234...
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    cout<<"Pattern 4"<<endl; //AAAA BBBB...
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4; j++){
            char ch = i+64;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    cout<<"Pattern 5"<<endl; //ABCD ABCD...
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4; j++){
            char ch = j+64;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    cout<<"Pattern 6"<<endl; //ABCD ABCD...
    for(int i=4; i>=1; i--){
        for(int j=1; j<=4; j++){
            char ch = i+64;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    cout<<"Pattern 7"<<endl; //ABCD ABCD...
    for(int i=0; i<=4; i++){
        for(int j=4; j>=1; j--){
            char ch = i+64;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    cout<<"SHAPE PATTERNS"<<endl; //ABCD ABCD...
    cout<<"Pattern 1"<<endl;
    for(int i=1; i<=4; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    cout<<"Pattern 2"<<endl;
    for(int i=1; i<=4; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    cout<<"Pattern 3"<<endl;
    for(int i=1; i<4; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    cout<<"Pattern 4"<<endl;
    for(int i=1; i<=4; i++){
        for(int j=1; j<=i; j++){
            char ch = i+64;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    cout<<"Pattern 5"<<endl;
    for(int i=4; i>=1; i--){
        for(int j=1; j<=i; j++){
            char ch = i+64; //instead of outer loop changing, can make 68/67 - i
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    cout<<"Pattern 6"<<endl;
    for(int i=1; i<=4; i++){
        for(int j=4; j>=i; j--){
            char ch = i+64; 
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    cout<<"Pattern 7"<<endl;
    for(int i=1; i<=4; i++){
        for(int j=i; j<=4; j++){
            char ch = j+64; 
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    cout<<"Pattern 8"<<endl;
    for(int i=1; i<=4; i++){
        for(int j=i; j<=4; j++){
            if(j%2!=0)
            {
                char ch = j+64;
                cout<<ch<<" ";
            }
            else
                cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    cout<<"Pattern 9"<<endl;
    for(int i=1; i<=4; i++){
        for(int j=1; j<=(4-i); j++)
        {
            cout<<"   ";
        }
        for(int k=1; k<=i; k++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    cout<<"Pattern 10"<<endl;
    for(int i=1; i<=3; i++){
        for(int j=1; j<=(3-i); j++)
        {
            cout<<"   ";
        }
        for(int k=1; k<=(2*i-1); k++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}