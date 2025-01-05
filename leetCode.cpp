class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n=s.size();
        vector<int>pre(n,0);
        for(auto q:shifts)
        {
            int l=q[0];
            int r=q[1];
            int shift=q[2];
            int x;
            if(shift==0)
            {
                x=-1;
            }
            else if(shift==1)
            {
                x=1;
            }
            pre[l]+=x;
            if(r+1<n)
            {
                pre[r+1]-=x;
            }
        }
        for(int i=1;i<n;i++)
        {
            pre[i]+=pre[i-1];
        }
        for(int i=0;i<n;i++)
        {
            int shift=pre[i]%26;
            if(shift<0)
            {
                shift+=26;
            }
            s[i]=((s[i]-'a')+shift)%26+'a';
        }
        return s;
    }
};