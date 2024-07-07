#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k;
    cin>>n>>k;
    vector <int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int res=0;
    for(int i=0;i<n;i++){
        if(v[i]==k) res++;
    }
    cout<<(res?1:0);
    return 0;
}