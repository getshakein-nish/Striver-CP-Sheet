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
int n;
cin>>n;
vector<string>v(n);
lp(0,n){
    cin>>v[i];
}
int ans=0;
for(auto val:v){
   if(val[0]=='I')
   ans+=20;
   else if(val[0]=='T')
   ans+=4;
   else if(val[0]=='D')
   ans+=12;
   else if(val[0]=='O')
   ans+=8;
   else if(val[0]=='C')
   ans+=6;
}
cout<<ans<<el;
}
