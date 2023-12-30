    string secondSmallest(int S, int D){
        // code here 
        if(9*D <= S) return "-1";
        string str(D,'0');
        str[0]='1';
        int i=D-1;
        S--;
        while(S>0){
            int num = (str[i]-'0');
            str[i]= S>=9?((num+9)+'0'):((num+S)+'0');
            S-=9;
            i--;
        }
        if(i<0) i++;
        while(i<D-1 && str[i]!='9') i++;
        str[i]=((str[i]-'0')-1)+'0';
        i--;
        str[i]=((str[i]-'0')+1)+'0';
        return str;
    }
