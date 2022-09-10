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
int n,m;
cin>>n>>m;
  lp(0,n){
    if(i%4==0 || i%4==2){
        lp(0,m){
            cout<<'#';
        }cout<<el;
    }
    if(i%4==1){
        lp(0,m-1){
            cout<<'.';
        }cout<<'#';
        cout<<el;
    }
    if(i%4==3){
        cout<<'#';
        lp(0,m-1){
           cout<<'.';
        }cout<<el;
    }
  }
}
