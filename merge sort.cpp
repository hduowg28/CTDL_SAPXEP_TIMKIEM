#include <bits/stdc++.h>
using namespace std;


int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin>>m>>n;
    vector <int> v1(m), v2(n);
    for(int i=0;i<n;i++) cin>>v2[i];
    for(int i=0;i<m;i++) cin>>v1[i];
    int m1=0, m2=0;
    while(m1<m&&m2<n){
        if(v1[m1]<=v2[m2]){
            cout<<"b"<<m1+1<<" ";
            m1++;
        }
        else {
            cout<<"c"<<m2+1<<" ";
            m2++;
        }
    }
    while(m1<m){
         cout<<"b"<<m1+1<<" ";
            m1++;
    }
    while(m2<n){
         cout<<"c"<<m2+1<<" ";
            m2++;
    }
    return 0;
}