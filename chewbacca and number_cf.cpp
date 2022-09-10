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
// code-{
    //under testcases-
   string num;
   cin>>num;
   lp(0,num.size()){
      if(i==0 && ((num[i]-'0')==9))
      continue;
      if((num[i]-'0')>=5){
        num[i]=(9-(num[i]-'0'))+'0';
      }
   }
   cout<<num<<endl;
      
}
