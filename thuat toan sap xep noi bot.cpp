#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k=0;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=n-1;i>=0;--i){
        int cnt=0;
        for(int j=0;j<i;j++){
            if(v[j]>v[j+1]) {swap (v[j], v[j+1]); cnt++;}
        }
        if(cnt){
            cout<<"Buoc "<<++k<<": ";
            for(auto x:v) cout<<x<<" ";
            cout<<endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif  
    int t = 1;
    solve();
    return 0;
}
