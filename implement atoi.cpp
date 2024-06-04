class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
         int num=0;
        int i=0;
        if(s[0]=='-')
        i++;          //skkip the negative sign
        
        while(i<s.length())
        {
            if(s[i]<'0' or s[i]>'9'){    // to check for alphabets
            return -1;}
            
            num*=10;                   //to shift numeric value
            num+=(s[i]-'0');          //to add next numeric value
            i++;
        }
        
        if(s[0]=='-')   //as we skipped the negative sign
        num*=-1;                 // to negate the num
        
        return num;
    }
};
