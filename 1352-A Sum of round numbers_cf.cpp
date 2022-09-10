#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define all(c) c.begin(),c.end()
#define lp(x,z) for(int i=x;i<z;i++)
#define velle(v,k) vector<long long>v(k)
#define hasm(y) map<int,int>y;
#define el "\n"
#define int long long

int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
// code-
  int t;
  cin>>t;
  while(t--){
    velle(v,4);
    int n,i=1;
    cin>>n;
    while(n!=0){
        int rem=n%10;
        v.pb(rem*i);
        i*=10;
        n/=10;
    }
    int ct=0;
    lp(0,v.size()){
        if(v[i]>0){
            ct++;
        }
    }
    cout<<ct<<el;
    lp(0,v.size()){
        if(v[i]>0){
            cout<<v[i]<<" ";
        }
    }cout<<el;
  }
}
