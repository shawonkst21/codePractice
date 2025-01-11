class Solution {
public:
    bool canConstruct(string s, int k) {
        int n=s.size();
        if(n==k)
        {
            return true;
        }
        else if(n<k)
        {
             return false;
        }
        map<char,int>m;
        for(auto i:s)
        {
            m[i]++;
        }
        int cnt=0;
         for(auto i:m)
         {
            if(i.second%2==1)
            {
                cnt++;
            }
         }
         if(cnt>k)return false;
         return true;
    }
};