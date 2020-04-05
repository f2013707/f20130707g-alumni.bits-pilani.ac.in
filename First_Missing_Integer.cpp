int Solution::firstMissingPositive(vector<int> &a) {
    int val;
    int nextval;
    int n=a.size();
    for(int i=1;i<a.size();i++)
    {
        if(a[i]<=0 ||a[i]>n)
        continue;
        val=a[i];
        while(a[val-1]!=val)
        {
            nextval = a[val-1];
            a[val-1]=val;
            val=nextval;
            if(val<=0||val>n)
            break;
        }
    }
    for (int i = 0; i < n; i++) { 
        if (a[i] != i + 1) { 
            return i + 1; 
        } 
    }
    return n+1;
}
