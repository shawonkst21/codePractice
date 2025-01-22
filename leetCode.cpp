class Solution {
public:
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
    vector<vector<int>> highestPeak(vector<vector<int>>& mat) {
          int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>>ans(m,vector<int>(n,-1));
        queue<pair<int,int>>s;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                  if(mat[i][j]==1)
                  {
                    s.push({i,j});
                    ans[i][j]=0;
                  }
            }
        }
        while(!s.empty())
        {
            auto temp=s.front();
            s.pop();
            int i=temp.first;
            int j=temp.second;
            for(int c=0;c<4;c++)
            {
                int i_=i+dx[c];
                int j_=j+dy[c];
                if(i_>=0 && i_<m && j_>=0 && j_<n && ans[i_][j_]==-1)
                {
                     ans[i_][j_]=ans[i][j]+1;
                     s.push({i_,j_});
                }
            }

        }
        return ans;
    }
};