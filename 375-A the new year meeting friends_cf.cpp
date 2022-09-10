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
 int x1,x2,x3;
 cin>>x1>>x2>>x3;
 int maxm=max(x1,x2);
 maxm=max(maxm,x3);
 int minm=min(x1,x2);
 minm=min(minm,x3);
 cout<<maxm-minm<<endl;
}
