#include <bits/stdc++.h>
#define ll long long
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define pb(x) push_back(x)
#define vi vector<int>
#define all(x) x.begin(), x.end()
using namespace std;

void io();
void solve(){
    int  n, q, l ,r, x;
    cin>>n;
    vi v(n);
    for(auto &x:v) cin>>x;
    cin>>q;
    FOR(i, 0, q){
         cin>>l>>r>>x;
         int cnt=0,ans=0;
        for(int j=l-1;j<r;j++){
            if(v[j]!=x){
                ans=j;
                cnt++;
                break;
            }
        }
            cout<<(cnt?ans+1:-1)<<endl;

        
    }
        
}
int main()
{
    io();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
void io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif  
}