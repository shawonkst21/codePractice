class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& q) {
        int n=words.size();
        vector<int>temp(n,0);
        for(int i=0;i<n;i++)
        {
            string s=words[i];
            if(s[0]=='a' || s[0]=='e'|| s[0]=='i' || s[0]=='o' || s[0]=='u')
            {
                int d=s.size()-1;
                if(s[d]=='a' || s[d]=='e' || s[d]=='i' || s[d]=='o' || s[d]=='u')
                {
                    temp[i]=1;
                }
            
        }
        vector<int>pre(n);
        pre[0]=temp[0];
        for(int i=1;i<n;i++)
        {
            pre[i]=temp[i]+pre[i-1];
        }
        vector<int>ans;
        for(int i=0;i<q.size();i++)
        {
             int l=q[i][0];
             int r=q[i][1];
             ans.push_back((l==0?pre[r]:(pre[r]-pre[l-1])));
        }
        return ans;
    }
};
//day2