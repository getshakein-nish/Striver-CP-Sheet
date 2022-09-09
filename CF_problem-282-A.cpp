#include<bits/stdc++.h>
using namespace std;

int main(){
   int t,ans;
   cin>>t;
   char str[3];
   int plus=0,minus=0;
   while(t--){
    for(int i=0;i<3;i++){
        cin>>str[i];
        if(str[i]=='+')
        plus++;
        else if(str[i]=='-')
        minus++;
    }
    ans=(0+plus/2)-minus/2;
   }
   cout<<ans<<endl;
}
