/*
A party has been organised on cruise. The party is organised for a limited time(T). The number of guests entering (E[i]) and leaving (L[i]) the party at every hour is represented as elements of the array. The task is to find the maximum number of guests present on the cruise at any given instance within T hours.

Example 1:
Input :

5    -> Value of T
[7,0,5,1,3]  -> E[], Element of E[0] to E[N-1], where input each element is separated by new line 
[1,2,1,3,4]   -> L[], Element of L[0] to L[N-1], while input each element is separate by new line.
Output :
8     -> Maximum number of guests on cruise at an instance.

Explanation:

1st hour:
Entry : 7 Exit: 1
No. of guests on ship : 6

2nd hour :
Entry : 0 Exit : 2
No. of guests on ship : 6-2=4

Hour 3:
Entry: 5 Exit: 1
No. of guests on ship : 4+5-1=8

Hour 4:
Entry : 1 Exit : 3
No. of guests on ship : 8+1-3=6

Hour 5:
Entry : 3 Exit: 4
No. of guests on ship: 6+3-4=5
Hence, the maximum number of guests within 5 hours is 8.

Example 2:
Input:
4  -> Value of T
[3,5,2,0]   -> E[], Element of E[0] to E[N-1], where input each element is separated by new line.
[0,2,4,4]    -> L[], Element of L[0] to L[N-1], while input each element in separated by new line

Output:
6
Cruise at an instance

Explanation:
Hour 1:
Entry: 3 Exit: 0
No. of guests on ship: 3

Hour 2:
Entry : 5 Exit : 2
No. of guest on ship: 3+5-2=6

Hour 3:
Entry : 2 Exit: 4
No. of guests on ship: 6+2-4= 4

Hour 4:
Entry: 0  Exit : 4
No. of guests on ship : 4+0-4=0

Hence, the maximum number of guests within 5 hours is 6.
The input format for testing
The candidate has to write the code to accept 3 input.
First input- Accept  value for number of T(Positive integer number)
Second input- Accept T number of values, where each value is separated by a new line.
Third input- Accept T number of values, where each value is separated by a new line.
The output format for testing
The output should be a positive integer number or a message as given in the problem statement(Check the output in Example 1 and Example 2)

Constraints:

1<=T<=25
0<= E[i] <=500
0<= L[i] <=500
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int count = 1;
    vector<int> v = {3,5,2,0};
    vector<int> e = {0,2,4,4};
    int sum = 0;
    int maxg = 0;
    for(int i=0; i<v.size(); i++){
            sum = sum + v[i] - e[i];
            if(sum>maxg)
                maxg = sum;
    }
    cout<<maxg;
}