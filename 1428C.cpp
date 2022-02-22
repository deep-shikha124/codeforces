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
        string s;
        cin>>s;
        int count1;
        int count2;
        int n=s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]=='A' && s[i+1]=='B'){
                count1++;
            }
             if(s[i]=='A' && s[i+1]=='B'){
                count2++;
            }
            cout<<min(n-count1,n-count2)<<endl;
        }
    }
    
}    