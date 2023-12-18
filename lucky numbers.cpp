//User-function template for C++

// Complete the function
// n: Input n
// Return True if the given number is a lucky number else return False

class Solution{
public:
    bool isLucky(int n) {
        // code here
        for(int i=2;i<=n;i++)
   {
       if(n%i==0)
       return 0;
       n-=n/i;
   }
   return 1; 
    }
};
