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
     stack<int>s;
     s.push(1);
     int ans=0;
     for(int i=1;i<n;i++)
     {
        if(str[i]=='_' && s.empty()==false)
        {
               ans++;
               s.pop();
        }
        else if(str[i]=='_' && s.empty()==true){
            s.push(i+1);
        }
        else{
            if(str[i]=='(')
            {
                s.push(i+1);
            }
            else{
                ans+=((i+1)-s.top());
                s.pop();
            }
        }
     }
     cout<<ans<<endl;

        
    }

}