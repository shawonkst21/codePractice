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
        vi v(n);
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]].pb(i);
        }
        vector<vector<int>>v1;
        for(auto i:mp)
        {
            v1.pb(i.second);
        }
        sort(begin(v1),end(v1));
        int q;
        cin>>q;
        while(q--)
        {
            string s;
            cin>>s;
            if(s.size()!=n)
            {
                no;
                continue;
            }
            else{
                map<char,vector<int>>m2;
                for(int i=0;i<n;i++)
                {
                    m2[s[i]].pb(i);
                }
                vector<vector<int>>v2;
                for(auto i:m2)
                {
                    v2.pb(i.second);
                }
                sort(begin(v2),end(v2));
                if(v1==v2)
                {
                    yes;
                }
                else{
                    no;
                }
            }
        }
    }
}
