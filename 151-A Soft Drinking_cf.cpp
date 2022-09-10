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
 int n,k,l,c,d,p,nl,np;
 cin>>n>>k>>l>>c>>d>>p>>nl>>np;
 c=c*d;
 p=p/np;
 k=(k*l)/nl;
 int ans=min(c,p);
 ans=min(ans,k)/n;
 cout<<ans<<el;
}
