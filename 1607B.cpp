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
        long long a,b;
        cin>>a>>b;
        long long m;
        for(long long i=1;i<=b;i++){
            if(a%2==0   ){
                m=a-i;
            }
            else{
                m=a+i;
            }
        }
        cout<<m<<endl;
    }
    
}    