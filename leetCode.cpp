class Solution {
public:
    long long gridGame(vector<vector<int>>& g) {
        int m=g[0].size();
        vector<vector<long long>>grid(2,vector<long long>(m));
        grid[0][0]=g[0][0];
            for(int j=1;j<m;j++)
            {
                grid[0][j]=g[0][j]+grid[0][j-1];
            }
             grid[1][m-1]=g[1][m-1];
             for(int j=m-2;j>=0;j--)
            {
                grid[1][j]=g[1][j]+grid[1][j+1];
            }
           long long mx=LLONG_MAX;
           for(int i=m-1;i>=0;i--)
           {
              long long sum;
              if(i==m-1)
              {
                sum=grid[1][0]-grid[1][i];
              }
              else if(i==0)
              {
                 sum=grid[0][m-1]-grid[0][0];
              }
              else{
                sum=max((grid[0][m-1]-grid[0][i]),(grid[1][0]-grid[1][i]));
              }
              mx=min(sum,mx);
           }
          return mx;
        
     
    }
};