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
#define pii pair<int, int>

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
        int n,p;
        cin>>n>>p;
        vi v(n);
        input(v);
        queue<pii> q;  
        vi t(n, -1);
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                q.push({i,0});
                t[i]=0;
            }
        }
        while(!q.empty())
        {
            pair<int,int>temp=q.front();
            int index=temp.first;
            int tt=temp.second;
            q.pop();
            int lava=p*(tt+1);
            int left=index-1;
            while(left>=0 && v[left]>0 && t[left]==-1){
                if(v[left]<=lava)
                {
                    t[left]=tt+1;
                    q.push({left,tt+1});
                }else{
                    break;
                }
                left--;
            }
           int right = index + 1;
            while (right < n && v[right] > 0 && t[right] == -1) {
                if (v[right] <= lava) {
                    t[right] = tt + 1; 
                    q.push({right, tt + 1});
                } else break;
                right++;
            }
        }
          output(t);
    }
}
