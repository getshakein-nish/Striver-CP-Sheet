#include<bits/stdc++.h>
 using namespace std;
 int main(){
     char str[20];
     int num=0;
     cin>>str;
     for(int i=0;str[i]!='\0';++i)
         if(str[i]=='4' || str[i]=='7')num++;
     if(num==4 || num==7)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
     return 0;
 }
