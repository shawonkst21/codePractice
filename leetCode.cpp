class Solution {
public:
    int maxScore(string s) {
        int cnt0=0,cnt1=0;
        for(auto i:s)
        {
            if(i=='1')
            {
                cnt1++;
            }
        }
        int mx=INT_MIN;
        for(int i=0;i<s.size()-1;i++)
        {
              if(s[i]=='0')
              {
                cnt0++;
              }
              else{
                cnt1--;
              }
              mx=max(mx,cnt1+cnt0);
        }
        return mx;
    }
};