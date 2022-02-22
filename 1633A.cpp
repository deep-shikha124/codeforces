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
        int n;
        cin>>n;
        int k=n%7;
        if(n%7==0){
            cout<<n<<endl;
        }
        
        else if(k<=n%10){
            cout<<n-k<<endl;
        }
        else{
            cout<<n+7-k<<endl;            
        }
    }
    
    
}    