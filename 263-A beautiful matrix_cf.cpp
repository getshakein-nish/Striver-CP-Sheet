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
   
   int array[5][5],x,y;
   lp(0,5){
    for(int j=0;j<5;j++){
        cin>>array[i][j];
        if(array[i][j]==1){
           x=i;
           y=j;
        }
    }
   }
   cout<<abs(x-2)+abs(y-2)<<el;
}
