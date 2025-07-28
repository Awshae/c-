#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(7);
    cout<<"Size of the vector is  "<<v.size()<<endl;
    for(int i=0; i<v.size();i++)
        cout<<v[i]<<endl;
    
    v.pop_back();
    v.insert(v.begin(),4);
    v.erase(v.begin()+1);
    reverse(v.begin(), v.begin() + 2);
    sort(v.begin(), v.end());
    for(int i=0; i<v.size();i++)
        cout<<v[i]<<endl;
    cout<<endl;
    v.clear();
}