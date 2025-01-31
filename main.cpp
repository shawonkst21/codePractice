#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl "\n"
#define pb push_back
const int N = 1e5 + 10;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
// int dx2[]={0,0,-1,1,1,1,-1,-1};
// int dy2[]={-1,1,0,0,1,-1,1,-1};
#define vi vector<int>
#define vp vector<pair<int, int>>
#define mii map<int, int>
#define setBits(a) (int)__builtin_popcountll(a)
#define mod 1000000007
//priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;

void faster() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

#define input(a)      \
    for (auto &x : a) \
        cin >> x
#define output(a)             \
    {                         \
        for (auto &x : a)     \
            cout << x << ' '; \
        cout << endl;         \
    }
#define testCase \
    int t;       \
    cin >> t;    \
    while (t--)

int32_t main() {
    faster();
    testCase{
        int n;
        cin>>n;
        string str;
        cin>>str;
        vector<int>temp;
        vi cnt(n,1);
        for(int i=0;i<n;i++)
        {
            if(str[i]=='1')
            {
                temp.pb(i+1);
                cnt[i]=0;
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++)
        {
                for(int j=i;j<=n;j+=i)
                {
                    if(cnt[j-1]==0 && str[j-1]=='1')
                    {
                        break;
                    }
                    else if(str[j-1]=='0' && cnt[j-1]==1)
                    {
                        ans+=i;
                        str[j-1]='1';
                    }
                    else{
                        continue;
                    }
                }
            
        }
        cout<<ans<<endl;
 
    }
}
