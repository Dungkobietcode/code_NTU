#include <bits/stdc++.h>
using namespace std;
int sang[10000002];
void solve(){
    sang[1]=1;
    sang[2]=1;
    for(int i=3;i<10000002;i++){
        sang[i]=(sang[i-1]+sang[i-2])%int(1e9+7);
    }
}

int main(){
    solve();
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        cout<<sang[n]<<endl;
    }
    return 0;
}
