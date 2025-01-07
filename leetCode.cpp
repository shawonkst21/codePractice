class Solution {
public:
vector<int>createlps(string patt)
{
     vector<int>lps(patt.size());
     int ldx=0;
     for(int i=1;i<patt.size();)
     {
          if(patt[ldx]==patt[i])
          {
               lps[i]=ldx+1;
               ldx++;
               i++;
          }
          else{
               if(ldx!=0)
               {
                    ldx=lps[ldx-1];
               }
               else{
                    lps[i]=ldx;
                    i++;
               }
          }
     }
     return lps;
}
bool kmp(string text,string pattern)
{
     vector<int>lps=createlps(pattern);
     int i=0,j=0;
     vector<int>ans;
     while(i<text.size())
     {
          if(text[i]==pattern[j]){
               i++;
               j++;
          }
          else{
               if(j!=0)
               {
                    j=lps[j-1];
               }
               else{
                    i++;
               }
          }
          if(j==pattern.size())
          {
               return true;
          }
     }
   return false;
}
    vector<string> stringMatching(vector<string>& words) {
        int n=words.size();
        vector<string>ans;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)continue;
                if(kmp(words[j],words[i]))
                {
                    ans.push_back(words[i]);
                    break;
                }
            }
        }
        return ans;
    }
};