#include <bits/stdc++.h>
#define ll long long
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define pb(x) push_back(x)
#define vi vector<int>
#define all(x) x.begin(), x.end()
using namespace std;

int a[6], sum, ok;
void io(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);
    #endif
}
void ktao(){
    for(int i=1;i<=5;i++) cin>>a[i];
    sum=a[1];ok=false;
}
void Try(int i){
    if(ok) return ;
    for(int j=1;j<=3;j++){
        
        if(j==1){
            sum+=a[i];
            if(i<5)
            Try(i+1);
            sum-=a[i];
        }
        if(j==3){
            sum-=a[i];
            if(i<5)
            Try(i+1);
            sum+=a[i];
        }
        if(j==2){
            int tmp=sum;
            sum*=a[i];
            
            if(i<5)
            Try(i+1);
            sum=tmp;
        }
        
         if(i==5) {
                ok=(sum==23?1:0);
                if(ok) break;
        }
    //    cout<<sum<<" ";
    }
    
}

void solve(){
    ktao();
    do{
        sum=a[1];
        Try(2);
    }while(next_permutation(a+1,a+6)&&!ok);

    cout<<(ok?"YES\n":"NO\n");
}

int main(){
    io();
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}