Given two positive integers num1 and num2, the task is to find the product of the two numbers on a 12 hour clock rather than a number line.
Note: Assume the Clock starts from 0 hour to 11 hours.

 

Example 1:

Input:
num1 = 2, num2 = 3
Output:
6
Explanation:
2*3 = 6. The time in a 12 hour clock is 6.


//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int mulClock(int num1, int num2){
     
        int mul=num1*num2%12;
        return mul;
    }
   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int num1,num2;
        
        cin>>num1>>num2;

        Solution ob;
        cout << ob.mulClock(num1,num2) << endl;
    }
    return 0;
}
// } Driver Code Ends
