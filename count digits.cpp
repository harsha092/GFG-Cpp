Given a number N. Count the number of digits in N which evenly divides N.

Note :- Evenly divides means whether N is divisible by a digit i.e. leaves a remainder 0 when divided.
 




int count=0,n=N;
        while(n>0){
            int rem=n%10;
            if(rem!=0 && N%rem==0){
                 count++;
             }
             n/=10;
        }
        
        return count;

