class Solution {
public:
    bool canConstruct(string s, int k) {
        if(k>s.length())
            return false;
        int count[26] = {0};
        for(int i=0;i<s.length();i++)
        {
            count[s[i]-'a']++;
        }
         int oddn=0;   
        for(int i=0;i<26;i++)
        {
            if(count[i]%2==1)
                oddn++;
        } 
        if(k>=oddn)
        return true;
        else
            return false;
    }
};
