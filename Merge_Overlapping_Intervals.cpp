/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 
 
 bool comparator(Interval i1,Interval i2)
 {
     return i1.start<i2.start;
 }
 bool isOverlapp(Interval i1,Interval i2)
 {
     int front = max(i1.start,i2.start);
     int end = min(i1.end,i2.end);
     return (end-front>=0)? 1:0;
 }
vector<Interval> Solution::merge(vector<Interval> &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
//sort(a.brgin(),a.end(),comaparator);
int n=a.size();
  sort(a.begin(),a.end(),comparator);  
  Interval temp;
  vector<Interval> res;
  temp=a[0];
  for(int i=1;i<n;i++)
  {
    if(isOverlapp(temp,a[i]))
        {
            int tmp=max(temp.end,a[i].end);
            temp.end=tmp;
        }    
    else{
        
        res.push_back(temp);
        temp=a[i];
        
    }
  }
  res.push_back(temp);
  return res;
}
