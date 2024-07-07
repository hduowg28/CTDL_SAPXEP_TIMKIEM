#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++){
        int new_index=i, new_number=v[i];
        for(int j = i;j>=0;--j){
            if(v[j]>new_number){
                // new_number=v[j];
                swap(v[j], v[new_index]);
                new_index=j;
                // cout<<new_number<<"*"<<new_index<<"\n";
            }
        }
        for(int j=0;j<=i;j++){
            cout<<v[j]<<" ";
            
        }
        cout<<endl;
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
