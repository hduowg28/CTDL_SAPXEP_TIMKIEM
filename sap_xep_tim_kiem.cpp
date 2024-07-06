#include <bits/stdc++.h>
#define ll long long
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define pb(x) push_back(x)
#define vi vector<int>
#define all(x) x.begin(), x.end()
using namespace std;
void io();

void solve(){
    int n;
    cin>>n;
    vi v(n);
    for(auto &x:v) cin>>x;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j]) {swap(v[i], v[j]);cnt++;}
        }
        if(cnt){
            cout<<"Buoc "<<i+1<<": ";
            for(auto x:v) cout<<x<<" ";
            cout<<"\n";
        }
    }
}
int main()
{
    io();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
        // cout<<cnt;
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