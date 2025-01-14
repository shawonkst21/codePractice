class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
                int n=A.size();
        vector<int>idx1(n+10),idx2(n+10);
        for(int i=0;i<n;i++)
        {
            idx1[A[i]]=i;
        }
          for(int i=0;i<n;i++)
        {
            idx2[B[i]]=i;
        }
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(A[i]==B[i])
            {
                ans.push_back(1);
            }
            else{
                int x=0;
                if(idx1[B[i]]<i)
                {
                    x++;
                }
                 if(idx2[A[i]]<i)
                {
                    x++;
                }
               ans.push_back(x);
            }
        }
        for(int i=1;i<n;i++)
        {
            ans[i]+=ans[i-1];
        }
        return ans;
    }
};