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
    
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int fare;
    while (/* condition */)
    {
        /* code */
    }
    
    if(m*a>=b){
        fare=b*m + (n-m)*a;
    }
    else{
        fare=n*a;
    }
    cout<<fare;


    
}    