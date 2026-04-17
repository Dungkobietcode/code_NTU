#include <bits/stdc++.h>

using namespace std;

int main(){
    int l,r,k;
    cin>>l>>r>>k;
    int res=(r/k)-((l-1)/k);
    cout<<res;
    return 0;
}
