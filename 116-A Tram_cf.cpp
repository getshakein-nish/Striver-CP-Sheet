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


void pehla(int n){
	
}

int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
// code-
int n,a,b,capacity=0,now=0;
cin>>n;
while(n--){
   cin>>a>>b;
   now-=a;
   now+=b;
   capacity=max(capacity,now);
}
cout<<capacity<<el;


pehla(n);
}
