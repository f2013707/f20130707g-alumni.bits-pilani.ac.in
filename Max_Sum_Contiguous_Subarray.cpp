int Solution::maxSubArray(const vector<int> &a) {
    int sumsofar=INT_MIN;int sum=0;
    int allneg=true;
    for(int i=0;i<a.size();i++)
    {
        
        if(a[i]>0)
        allneg=false;
        if(sum+a[i]>0)
        {
            sum+=a[i];
        }
        else
        sum=0;
        if(sum>sumsofar)
        sumsofar=sum;
    }
    int ans=INT_MIN;
    if(allneg)
    {
       for(int i=0;i<a.size();i++)
       ans=max(ans,a[i]);
       return ans;
    }
    return sumsofar;
}
