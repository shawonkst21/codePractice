#include <bits/stdc++.h>
//#include <ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
//using namespace __gnu_pbds;
template <typename T>
//using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define opt()                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define double long double
#define int long long
#define pb push_back
#define mp make_pair
#define in insert
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define lcm(a, b) (a * b) / (__gcd(a, b))
#define endl "\n"
#define watch(x) cerr << "\n" \
                      << (#x) << " is " << (x) << endl
#define cerr   \
    if (false) \
    cerr

void code()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
const int INF = 1e18;
const int N = 3e5 + 10;
const int MOD = 1e9 + 7;
const int mod = 998244353;

int32_t main()
{
    opt();
    int tt = 1;
    cin >> tt;
    for (int tc = 1; tc <= tt; tc++)
    {
        int n, k;
        cin >> n >> k;
        if (__lg(n) < __lg(k))
        {
            cout << -1 << endl;
            continue;
        }
        if (n == k)
        {
            cout << n << endl;
            continue;
        }
        if(k==0)
        {
            int ans = (1LL << ((int)log2(n) + 1LL));
            cout << ans << endl;
            continue;
        }
        bitset<64>a(n);
        bitset<64>b(k);
        int fix=-1,change=-1,pos=-1,ans=0;
        for(int i=63;i>=0;i--)
        {
            if((n&(1LL<<i)) && !(k&(1LL<<i)))
            {
                pos=i;
                break;
            }
            if(!(n&(1LL<<i)))
            {
                fix=i;
            }
        }
        bool fail=false;
        for(int i=fix;i>=0;i--)
        {
            if((k&(1LL<<i)))
            {
                fail=true;
                break;
            }
        }
        if(fail)
        {
            cout<<-1<<endl;
        }
        else
        {
            n|=(1LL<<fix);
           // ans=n;
            for(int i=63;i>=fix;i--)
            {
                ans|=(n&(1LL<<i));
            }
            //ans|=(1LL<<fix);
            cout<<ans<<endl;
        }
    }
    return 0;
}
