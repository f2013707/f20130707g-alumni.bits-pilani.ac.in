void Solution::rotate(vector<vector<int> > &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n=a.size();
    for(int i=0;i<n/2;i++)
    {
        for(int j=i;j<n-i-1;j++)
        {
            int temp;
            temp = a[j][n-i-1];
            a[j][n-i-1]=a[i][j];
            a[i][j] = a[n-j-1][i];
            a[n-j-1][i]=a[n-i-1][n-j-1];
            a[n-i-1][n-j-1] =temp;
        }
    }
    
}
