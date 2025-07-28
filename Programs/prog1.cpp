/*
In the kingdom of Numaria, the ancient Mirror Oracle holds a secret: every number hides a palindrome deep within itself.
Legend says that a number, when shown its mirror image (its digits reversed), begins a journey. Each time, 
it adds its reflection to itself, transforming and evolving. This process continues until the number reaches a perfect symmetry—a palindrome, 
where the number reads the same forward and backward.
The wise wizard of Numaria, Algebrion, has tasked you with uncovering the mirror journey of a given number.
🧠 Your Task:
Given a number n, simulate its Mirror Transformation Journey by repeatedly:
Reversing its digits to obtain a reflected number r.
Adding r to n.
Repeating this process with the new sum until a palindrome is found.
Return the final palindrome number discovered.
📥 Input:
An integer n (where 1 ≤ n ≤ 10⁶)
📤 Output:
The palindrome number reached after one or more mirror transformations.
🧠 Constraints & Twist (for difficulty):
You must implement the digit reversal manually—do not use any string or array methods.
Optimize your code to avoid unnecessary iterations and handle the worst case within reasonable time.
🧪 Example:
Input:
78
Explanation:

78 + 87 = 165

165 + 561 = 726

726 + 627 = 1353

1353 + 3531 = 4884 ✅ Palindrome

Output:
4884

*/
 
#include <iostream>
using namespace std;
int main()
{   int n = 78;
    while (1) 
    {
        int r=0;
        int temp = n;
        while(temp>0)
        {
            r = r*10 + temp%5;
            temp = temp/10;
        }
        if(r==n)
        {
            cout<<r<<" is a palindrome";
            break;
        }
        else
            n = n+r;
    }
}