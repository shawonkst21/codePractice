class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n=derived.size();
        vector<int>temp(n);
        temp[0]=0;
        for(int i=0;i<n;i++)
        {
            if(i!=n-1)
            {
                temp[i+1]=temp[i]^derived[i];
            }
            else{
                if(temp[0]==temp[i]^derived[i])
                {
                    return true;
                }
               
            }
        }
        temp.clear();
        temp[0]=1;
        for(int i=0;i<n;i++)
        {
            if(i!=n-1)
            {
                temp[i+1]=temp[i]^derived[i];
            }
            else{
                if(temp[0]==temp[i]^derived[i])
                {
                    return true;
                }
               
            }
        }
        return false;

        
    }
};