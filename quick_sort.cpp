#include <bits/stdc++.h>
using namespace std;


int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    vector <int> v(n);
    for(auto &x: v) cin>>x;
    int chot=v[n-1], index=0;
    for(int i=0;i<n;i++){
        if(v[i]< chot){
            swap(v[i], v[index++]);
        }
    }
    swap(v[n-1], v[index++]);
    for(int i=0;i<n;i++){
        if(v[i]==chot){
            cout<<"["<<chot<<"] ";
        }
        else cout<<v[i]<<" ";
    }
    return 0;
}