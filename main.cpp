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
    string s;
    cin>>s;

    int one=0;
    int four=0;
    string ans="YES";

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1' && i==0)
        {
            one=1;
        }
        else if(s[i]=='1')
        {
             one=1;
             if(four<=2)
             {
                four=0;
             }
             else if(four>2){
                ans="NO";
                break;
             }
        }
        else if(s[i]=='4' && i!=0){
            four++;
        }
        else{
            ans="NO";
            break;
        }
    }
    if(four>2){
        ans="NO";
    }
    cout<<ans<<endl;
}
