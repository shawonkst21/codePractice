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
        string s1,s2;
        cin>>s1>>s2;
        vector<pair<int,char>>temp;
        vector<pair<int,char>>temp1;

        char ch;
        int cnt1=0,cnt2=0;
        for(int i=0;i<s2.size();i++)
        {
              if(s2[i]=='L')
              {
                 cnt1++;
                 if(cnt2)
                 {
                    temp.pb({cnt2,'R'});
                 cnt2=0;
                 }
              }
              else{
                cnt2++;
                   if(cnt1)
                   {
                       temp.pb({cnt1,'L'});
                cnt1=0;
                   }
              }
        }
        if(cnt1)
        {
            temp.pb({cnt1,'L'});
        }
        else{
             temp.pb({cnt2,'R'});
        }

        cnt1=0,cnt2=0;
         for(int i=0;i<s1.size();i++)
        {
              if(s1[i]=='L')
              {
                 cnt1++;
                 if(cnt2)
                 {
                    temp1.pb({cnt2,'R'});
                 cnt2=0;
                 }
              }
              else{
                cnt2++;
                   if(cnt1)
                   {
                       temp1.pb({cnt1,'L'});
                cnt1=0;
                   }
              }
        }
        if(cnt1)
        {
            temp1.pb({cnt1,'L'});
        }
        else{
             temp1.pb({cnt2,'R'});
        }
        bool ans=false;

        if(temp.size()==temp1.size())
        {
            for(int i=0;i<temp.size();i++)
            {
                if(temp[i].second==temp1[i].second && (temp[i].first>=temp1[i].first && temp[i].first<=temp1[i].first*2))
                {
                     ans=true;
                }
                else{
                    ans=false;
                    break;
                }
                {

                }
            }
        }
         if(ans)
         {
            yes;
         }
         else{
            no;
         }
        
    }
}
