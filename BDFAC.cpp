#include<bits/stdc++.h>

using namespace std;
int prime[1005];
int check[1005];
int dem1=0;
void sang(){
    fill(prime,prime+1001,1);
    prime [0]=0,prime[1]=1;
    for(int i=2;i*i<=1001;i++){
        if(prime[i]){
            for(int j=i*i;j<=1001;j+=i){
                prime[j]=0;
            }
        }
    }
    for(int i=2;i<1001;i++){
        if(prime[i]){
            check[dem1++]=i;
        }
    }
}

int solve(int n,int p){
    int dem=0;
    while(n>=p){
        dem+=n/p;
        n/=p;
    }
    return dem;
}

int main(){
    sang();
    int n;
    while(cin>>n){
        for(int i=0;i<dem1;i++){
            if(check[i]>n){
                break;
            }
            cout<<solve(n,check[i]);
        }
        cout<<endl;
    }
    return 0;
}
