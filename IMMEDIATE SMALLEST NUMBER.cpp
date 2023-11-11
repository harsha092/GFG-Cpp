
class Solution{
public:	
	void immediateSmaller(vector<int>&a, int n) {
	    //  code here
	     n--;
    for ( int i{}; i < n; ++i )
        a[ i ] = a[ i + 1 ] < a[ i ] ? a[ i + 1 ] : -1;
    a[ n ] = -1;
	}

};
