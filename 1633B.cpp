#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
     int t;
     cin>>t;
     while(t--){
         vector<string> s;
         for(int i=0;i<s.size();i++){
             s.push_back(s[i]);
         }
         int countz=0;
         int counto=0;
         for(int i=0;i<s.size();i++){
             if(s[i]=='0'){
                 countz++;
             }
             else{
                 counto++;
             }
         }
         if(countz<counto){
             cout<<countz<<endl;
         }
         else if(counto<countz){
             cout<<counto<<endl;
         }
         else{
             cout<<'0'<<endl;
         }
     }
    
    
}    