class Solution {
public:
bool isSubset(vector<int>&frq,vector<int>&temp)
{
    for(int i=0;i<26;i++)
    {
        if(frq[i]>temp[i])
        {
            return false;
        }
    }
    return true;
}
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string>ans;
        vector<int>frq(26,0);
        for(auto &word:words2)
        {
            int temp[26]={0};
            for(auto &ch:word)
            {
                temp[ch-'a']++;
                frq[ch-'a']=max(temp[ch-'a'],frq[ch-'a']);
            }
        }

        for(auto & str:words1 )
        {
            vector<int>temp(26,0);
            for(auto&ch:str)
            {
                temp[ch-'a']++;
            }
            if(isSubset(frq,temp)==true)
            {
                ans.push_back(str);
            }
        }
       return ans;
    }
};