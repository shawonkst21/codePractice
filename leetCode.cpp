class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int>box(n,0);
       for(int i=0;i<n;i++)
       {
            if(boxes[i]=='1')
            {
                box[i]=1;
            }
       }
       vector<int>temp=box;
      for(int i=1;i<n;i++)
      {
        box[i]+=box[i-1];
      }
      for(int i=n-2;i>=0;i--)
      {
        temp[i]+=temp[i+1];
      }
      vector<int>pre(n+10,0),suf(n+10,0);
      pre[0]=box[0];
      for(int i=1;i<n;i++)
      {
        pre[i]=pre[i-1]+box[i];
      }
      suf[n-1]=temp[n-1];
      for(int i=n-2;i>=0;i--)
      {
        suf[i]=temp[i]+suf[i+1];
      }
      vector<int>ans(n,0);
      for(int i=0;i<n;i++)
      {
          if(i==0)
          {
              ans[i]=suf[i+1];
          }
          else if(i==n-1)
          {
            ans[i]=pre[i-1];
          }
          else{
            ans[i]=pre[i-1]+suf[i+1];
          }
      }
      return ans;
    }
};