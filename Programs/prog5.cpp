/*
🧱 The Puzzle Stone

In a quiet village named Factorville, there lies an ancient stone puzzle with a number carved into it. The elders say:

> “Break this number into its smallest prime pieces, and the treasure will be yours.”



You are the chosen solver. Your task is to uncover all the prime factors of the number and list them in ascending order. 
If a prime repeats in the factorization, it must appear multiple times in your answer.


---

🧾 Examples from past solvers:

When the number on the stone was 75, the correct answer was:
3, 5, 5

When someone saw the number 19, since it was already a prime number, the answer was simply:
19

For the puzzle with the number 84, the stone opened when the solver answered:
2, 2, 3, 7
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> a;
int main(){
    int n = 75;
    int i=2;
    while(n>1){
        while(n%i==0){
            n = n/i;
            a.push_back(i);
        }
        i++;
    }
    sort(a.begin(), a.end());
    for(int i = 0; i<a.size(); i++)
        cout<<a[i]<<"";
    
}